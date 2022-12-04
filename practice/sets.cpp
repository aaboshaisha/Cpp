#include <iostream>
#include <set>
#include <string>

void print_set( std::set<std::string> S){
    for(auto &x:S){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::set< std::string > fruit {};

    // add some elements to the set
    fruit.insert("apple");
    fruit.insert("orange");
    fruit.insert("banana");
    fruit.insert("grape");
    fruit.insert("guava");
    fruit.insert("citrus");
    fruit.insert("peach");
    fruit.insert("pineapple");
    fruit.insert("melon");

    print_set(fruit);

    // task: print out the size
    std::cout << "Set size is: " << fruit.size() << std::endl;

    // add same element repeatedly and print the size again
    fruit.insert("apple");
    fruit.insert("apple");
    fruit.insert("apple");
    fruit.insert("apple");

    std::cout << "Set size is: " << fruit.size() << std::endl;
    
    // search for values using .contains
    std::cout << fruit.contains("apple") << std::endl;
    
    // search using .count
    std::cout << fruit.count("banana") << std::endl;

    // search using .find
    auto iter { fruit.find("orange") };
    std::cout << *iter << std::endl;
    
    // attempt to  delete values
    std::cout << fruit.erase("apple") << std::endl;

    // insert values of x x using the return value of .insert 
    // insert to check whether element was already present
    auto [where, bool1 ] = fruit.insert("apple");
    auto [where2, bool2] = fruit.insert("kaka");

    std::cout << bool1 << std::endl;
    std::cout << bool2 << std::endl;

    print_set(fruit);



    return 0;
}