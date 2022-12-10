#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


bool search_for_token(std::ifstream &file, std::string const token, int idx){
    std::string line {};
    std::stringstream ss {};

    // get one line at a time
    while(getline(file, line)){
        // parse it in a string stream
        std::stringstream ss(line);
        // then loop over the string stream to extract user data one filed at a time
        std::string field {};
        std::vector<std::string> usertokens{};

        while(getline(ss, field, ',')){
            usertokens.push_back(field);
        }
        if(usertokens[idx] == token){
            return true;
        }
    }
    return false;

}