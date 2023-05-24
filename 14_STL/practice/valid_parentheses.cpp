#include <iostream>
#include <string>
#include <map>

std::map< char, char > match {};


bool is_valid(std::string s, int i = 0){
    int j {(int) s.size() - i - 1};

    if(i >= j){
        return true;
    }

    if(match[s[i]] != s[j]){
        return false;
    }
    return is_valid (s, ++i);
}

int main(){
    
    match['('] = ')';
    match['{'] = '}';
    match['['] = ']';

    std::string s1 {"(())"};
    std::cout << is_valid (s1) << std::endl;
    std::string s2 {"()"};
    std::cout << is_valid (s2) << std::endl;
    std::string s3 {"[[]]"};
    std::cout << is_valid (s3) << std::endl;
    std::string s4 {"[]))"};
    std::cout << is_valid (s4) << std::endl;
    std::string s5 {"{}))"};
    std::cout << is_valid (s5) << std::endl;
    return 0;
}