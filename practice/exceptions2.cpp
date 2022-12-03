#include <iostream>
#include <string>

int main(){
    std::cout << "Enter a string: ";
    std::string str {};
    std::cin >> str;

    std::cout << "You entered \"" << str << "\"" << std::endl;
    /*Task: if the string str contians a number, print out:
    "As a number: " followed by the numerical repressentation.
    Otherwise print: Not a number
    Note: std::stoi can be used to convert strings to integers */
    return 0;
}