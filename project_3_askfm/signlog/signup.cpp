#include <iostream>
#include <string>
#include <fstream>
#include "search.cpp"

std::ifstream readFromFile(std::string const &filename){
    std::ifstream file {};
    file.open(filename);
    if(file.fail()){
        std::cout << "Error. Could not read file!" << std::endl;
    }
    return file;
}

void writeToFile(std::string const &filename, std::string const &content, bool append = false){
    std::ofstream file;
    if(append){
        file.open(filename, std::ios_base::app);
    }
    else{
        file.open(filename);
    }
    file << content;
    file << std::endl;
    file.close();
}

int generate_id(){
    std::ifstream ifile {};
    ifile = readFromFile("id.txt");

    int id {};
    ifile >> id;
    id++;
    ifile.close();

    std::ofstream ofile {};
    ofile.open("id.txt");
    if(ofile.fail()){
        std::cout << "Error. Could not open ids file";
    }
    ofile << id;
    ofile.close();

    return id;
}

bool sign_up(){
    int id {};
    std::string username {};
    std::string password {};
    std::string name {};
    std::string email {};
    int anonymous {};


    std::cout << "Enter username: ";
    std::cin >> username; 
    // check if username exists
    std::ifstream iusers {};
    iusers = readFromFile("users.txt");

    bool exist {search_for_token(iusers,username, 1)};
    if(exist){
        std::cout << "Username already exists. Please choose another" << std::endl;
        sign_up();
    }
    else{
        id = generate_id();
        std::cout << "Enter password: ";
        std::cin >> password;
        std::cout << "Enter your name (no spaces): ";
        std::cin >> name;
        std::cout << "Enter your email: ";
        std::cin >> email;
        std::cout << "Allow anonymous question? (1 or 0): ";
        std::cin >> anonymous;

        // put all into a string stream
        std::stringstream ss {};
        ss << id << "," << username << "," << password << ",";
        ss << name << "," << email << "," << anonymous;

        std::string input {ss.str()};

        // add to users file
        writeToFile("users.txt", input, true);
        
        // close files
        iusers.close();
        return true;
    }

}


bool login(){
    std::string username {};
    std::string password {};

    std::cout << "Enter your username: ";
    std::cin >> username;

    std::ifstream iusers {readFromFile("users.txt")};
    if(search_for_token(iusers, username, 1)){
        iusers.close();
        std::ifstream iusers {readFromFile("users.txt")};

        std::cout << "Enter your password: ";
        std::cin >> password;
        
        if(search_for_token(iusers, password, 2)){
            std::cout << "Login successful" << std::endl;
            return true;
        }
        else{
            std::cout << "Password incorrect" << std::endl;
            return false;
        }
    }
    else{
        std::cout << "Username not found" << std::endl;
        return false;
    }
}


int main(){
    //sign_up();
    login();
    return 0;
}