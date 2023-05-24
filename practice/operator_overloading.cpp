/*
Write a string + stirng and string + int in two ways:
1. using a function
2. using overloading
*/

#include <iostream>

std::string add_strings(std::string s1, std::string s2){
    std::string s3 {};
    
    for (auto c: s1){
        s3.push_back(c);
    }
    for (auto c: s2){
        s3.push_back(c);
    }
    return s3;
}


// Writing this as an operator is not that much different

std::string operator+ (std::string s1, std::string s2){
    std::string s3 {};

    for(auto c:s1){
        s3.push_back(c);
    }
    for(auto c:s2){
        s3.push_back(c);
    }
    std::cout << "Using Operator Overloading" << std::endl;
    return s3;
}



int main(){
    std::string s1 {"abc"};
    std::string s2 {"def"};

    std::cout << add_strings("abc", "def") << std::endl;
    std::cout << s1 + s2 << std::endl;


    return 0;
}




