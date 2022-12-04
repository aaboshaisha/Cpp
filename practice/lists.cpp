#include <iostream>
#include <list>
#include <string>
#include <stdexcept>

/* 
element_at_index(L, idx) 
Return a reference to the element of the list L at the provided index.
If the provided index is out of range, throw an instance of:
std::out_of_range. 
*/
std::string& element_at_index(unsigned int idx , std::list< std::string >& L){
    unsigned int current_idx {0};
    for(auto &s:L){
        if(current_idx == idx){
            return s;
        }
        current_idx++;
    }
    throw std::out_of_range {"Index provide is out of range"};
} 




int main(){

    std::list< std::string > fruit {};

    // add two elements to the end
    fruit.push_back("apple");
    fruit.push_back("orange");

    // add two elements to the beginning
    fruit.push_front("banana");
    fruit.push_front("grapes");

    // add another element to the end
    fruit.push_back("pineapple");

    // print out the elements of the list
    for(std::string &s:fruit){
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // print out the first and last elements
    // then delete them from the list
    std::cout << "First element: " << fruit.front() << std::endl;
    std::cout << "Last element: " << fruit.back() << std::endl;

    fruit.pop_front();
    fruit.pop_back();

    // print out the elements of the list
    for(std::string &s:fruit){
            std::cout << s << " ";
    }
    std::cout << std::endl;

    // insert the value "pear" as the 3rd element of the list
    auto iter = fruit.begin();
    iter++;
    iter++;
    fruit.insert(iter, "pear");

    // complete the element_at_index func above then use it to print out
    // the element at index 2. modify the element at index 3 to be "Guava"

    std::cout << "Element at index 2: " << element_at_index(2, fruit);
    std::cout << std::endl;

    element_at_index(2, fruit) = "guava";

    for(std::string &s:fruit){
            std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}