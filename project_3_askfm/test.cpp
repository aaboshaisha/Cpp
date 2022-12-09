#include <iostream>
#include "search.cpp"
#include "openfiles.cpp"
#include "signup.cpp"
#include "login.cpp"

bool search_in_file(); 
std::fstream open_file();
bool sign_up();
bool login();

int main(){
    //std::fstream test {open_file("testfile.txt")};
    //std::cout << search_in_file(test, "Line 4") << std::endl;
    //std::cout << search_in_file(test, "Line 6") << std::endl;
    //sign_up();
    //std::fstream users {open_file("users.txt")};
    //std:: cout << search_in_file(users, "salma") << std::endl;
    //std:: cout << search_in_file(users, "amr") << std::endl;
    std::cout << login() << std::endl;
    
}