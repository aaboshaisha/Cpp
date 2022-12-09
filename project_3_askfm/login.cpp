#include <iostream>
#include <string>
#include <fstream>

bool check_password(std::string username){
    std::fstream current_user {open_file(username + ".txt")};
    std::string password {};
    std::cout << "Enter password: ";
    std::cin >> password;

    // got to line 3 in file where passwords are stored
    int line_num {1};
    std::string line {};
    
    while(getline(current_user, line)){
        if(line_num == 3){
            size_t found = line.find(password);
            if(found != std::string::npos){
                std::cout << "Login successful" << std::endl;
                return true;
            }
        }
        line_num++;
    }
    std::cout << "Password incorrect" << std::endl;
    return false;   
}


bool login(){
    std::string username {};
    std::fstream users {open_file("users.txt")};

    std::cout << "Enter your username: ";
    std::cin >> username;
    
    // check if username exists
    if(search_in_file(users, username)){
       return check_password(username); 
    }
    else{
        std::cout << "Username does not exist" << std::endl;
        return false;
    }

}