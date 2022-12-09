#include <iostream>
#include <string>
#include <fstream>

auto mode = std::ios::in | std::ios::out; 
std::fstream open_file(std::string filename){
    std::fstream filehandler {};
    filehandler.open(filename);
    if(filehandler.fail()){
        std::cout << "Error: Could not open file!" << std::endl;
        return filehandler;
    }
    else{
        return filehandler;
    }
}