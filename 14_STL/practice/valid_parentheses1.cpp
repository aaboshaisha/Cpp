#include <iostream>
#include <stack>
#include <string>
#include <map>


std::map < char , char > match {};



int main(){
    match['('] = ')';
    match['['] = ']';
    match['{'] = '}';


    std::stack <char> pstack {};

    std::cout << "Enter string of parentheses to see if they match: ";
    std::string s;
    std::cin >> s;

    for(auto c:s){
        
        if(pstack.empty()){
            pstack.push(c);
        }
        else if(match[pstack.top()] == c){
            pstack.pop();
        }
        else{
            pstack.push(c);
        }
    }
    std::cout << pstack.empty() << std::endl;

}