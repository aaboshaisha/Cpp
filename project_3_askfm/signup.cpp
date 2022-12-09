#include <iostream>
#include <fstream>
#include <string>
//#include "search.cpp"
//#include "openfiles.cpp"

bool search_in_file();
std::fstream open_file();

bool sign_up(){
    std::string username {};
    std::cout << "Enter username (no spaces): ";
    std::cin >> username;
    std::fstream users_r {open_file("users.txt")};

    bool exist {search_in_file(users_r, username)};
    if(exist){
        std::cout << "Username already exists. Please pick a different username";
        sign_up();
    }
    else{
        // create a new user - ask them to enter other details
        // give them new id
        int id {};
        std::fstream ids_file_r {open_file("sysfile.txt")};
        // read most recent id
        ids_file_r >> id;
        // increment
        ++id;
        // update ids record
        std::fstream ids_file_w {open_file("sysfile.txt")};
        ids_file_w << id;

        ids_file_r.close();
        ids_file_w.close(); 

        std::string password {};
        std::cout << "Enter password: ";
        std::cin >> password;
        
        std::string email {};
        std::cout << "Enter email: ";
        std::cin >> email;

        std::string name {};
        std::cout << "Enter your name: ";
        std::cin >> name;

        std::string anonymous {};
        std::cout << "Allow anonymous questions? (0 0r 1): ";
        std::cin >> anonymous;

        // store new user information in a file with this user's name
        std::string filename {username + ".txt"};
        //std::cout << filename << std::endl;

        //create new file for user
        std::ofstream userfile {};
        userfile.open(filename);


        if(userfile.fail()){
            std::cout << "Error: Could not create new user entry file" << std::endl;
            return false;
        }

        userfile << id << std::endl; 
        userfile << username << std::endl; 
        userfile << password << std::endl; 
        userfile << name << std::endl; 
        userfile << email << std::endl; 
        userfile << anonymous << std::endl;

        userfile.close();
        users_r.close();

        // add new user and id to users file
        std::fstream users_w;
        auto mode = std::ios::in | std::ios::out | std::ios::app; 
        users_w.open("users.txt", mode);
        if(users_w.fail()){
            std::cout << "Error! Could not open users file" << std::endl;
        }
        users_w << username << " " << id << std::endl;
        users_w.close();
    }
    return true;
}