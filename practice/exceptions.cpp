#include <iostream>
#include <string>
#include <vector>

/*
std::string last(std::vector<std::string> input){
    //Q: What should we do if the input vector has no elements
    //at all?
    return input.at(input.size() - 1);
}

int last(std::vector<int> input){
    //Q: What should we do if the input vector has no elements
    //at all?
    return input.at(input.size() - 1);
}

char last(std::vector<char> input){
    //Q: What should we do if the input vector has no elements
    //at all?
    return input.at(input.size() - 1);
}
*/

template<class T>
T last(std::vector<T> input){
    return input.at(input.size() - 1);
}

int main(){
    std::vector<std::string> V {"apple", "banana", "orange"};
    std::vector<int> W {6, 10 ,17};

    std::cout << last(V) << std::endl; 
    std::cout << last(W) << std::endl; 


    return 0;
}