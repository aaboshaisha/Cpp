#include <iostream>
#include <fstream>
#include <string>

// search for username inside our users system file
bool search_in_file(std::fstream &file, std::string username){
    std::string line {};
    
    while(getline(file, line)){
        std::size_t found = line.find(username);
        if(found != std::string::npos){
            return true;
        }
    }
    return false;
}
