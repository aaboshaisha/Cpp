#include <iostream>
#include <string>
#include <stack>

std::string remove_duplicates(std::string S){
    std::stack <char> rstack {};
    for(auto c:S){
        std::cout << "Char: " << c << std::endl;

        if(rstack.empty()){
            rstack.push(c);
        }
        else{
            if(rstack.top() == c){
                rstack.pop();
            }
            else{
                rstack.push(c);
            }
            
        }
    }
    

    std::string result {};
    while(!rstack.empty()){
        result += rstack.top();
        rstack.pop();
    }   

    return result; 

}


int main(){
    std::cout << remove_duplicates( "abbaca" ) << std::endl;
    return 0;
}