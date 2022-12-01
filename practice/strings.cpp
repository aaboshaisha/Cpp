#include <iostream>
#include <string>

int main(){
    // task 0: create two strings s1 and s2 each with some initial text
    std::string s1 {"Hello"};
    std::string s2 {"World"};

    // task 1: print out the value of s1
    std::cout << "S1 contains [ " << s1 << " ]" << std::endl;
    
    // task 2: create an empty string s3
    // is an initializer necessary? 
    std::string s3 {};

    // get letter at index 1 in 2 different ways
    std::cout << "Letter at idx 1: " << s1[1] << std::endl;
    std::cout << "Letter at idx 1: " << s1.at(1) << std::endl;

    // task 3: set s3 to be a concatenation of s1, s2 
    s3 = s1+s2;
    std::cout << s3 << std::endl;

    // task 4: print out length of s1, s2, s3
    std::cout << "Length of s1: " << s1.length() << std::endl;
    std::cout << "Length of s2: " << s2.length() << std::endl;
    std::cout << "Length of s3: " << s3.length() << std::endl;
    
    // task 5: iterate over each character in s3 (with two different kinds of loop)
    // and print each character by itself
    for(char x:s3){
        std::cout << x << std::endl;
    }

    // add extra characetrs to end of string
    s3+= ". These are some added characters";
    std::cout << s3 << std::endl;

    // Reading string data from user:
    std::string word1 {};
    std::string word2 {};

    // read two words from user into word1 and word2
    //std::cin >> word1;
    //std::cin >> word2;

    //std::cout << word1 << " " << word2 << std::endl;
    
    // read a line of text from user
    std::cout << "Enter a line of text: " << std::endl;
    std::string line {};
    std::getline(std::cin, line);
    
    // print it back out
    std::cout << "The user entered line: " << line << std::endl;


    // How to keep reading words from user till u end file (ctrl + D)
    /*std::cout << "Keep entering words and when done hit Ctrl+D" << std::endl;
    std::string word{};
    while(std::cin >> word){
        std::cout << word << std::endl;
    }
    */

    std::cout << "You have ended the program" << std::endl;
    // task: add some code to print out the lowercase version of a string
    // include cctype
    
    std::string input{};
    std::string lower_case{};

    std::cout << "Enter a string to convert to lower case: " << std::endl;
    std::getline(std::cin, input);
    
    for(char x: input){
        lower_case += std::tolower(x);
    }
    std::cout << "The lowercase version: " << lower_case << std::endl;


    /* task: a basic loop to read words from the user. Once user is done
    entering words, the longest_word entered is stored. If multiple words, 
    only keep the first*/


    return 0;
}