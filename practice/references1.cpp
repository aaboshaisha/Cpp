#include <iostream>
#include <vector>

void print_vector(std::vector<int> V){
    for(auto x:V){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

/* add_ten(V) 
    Given a vector of integers, add 10 to each eleemtn of the vector
    Try two diff functions passing by reference vs by value
*/

void add_ten(std::vector<int> V){
    for(unsigned int i = 0; i < V.size(); i++){
        V.at(i) += 10;
    }
}

void add_ten1(std::vector<int> &V){
    for(int x: V){
        x+=10;
    }
}

void add_ten2(std::vector<int> &V){
    for(int& x:V){
        x+=10;
    }
}

int main(){
    std::vector<int> V {6, 8, 10, 17};

    std::cout << "Before: ";
    print_vector(V);

    // Add 10 to each element in the vector
    add_ten(V);
    std::cout << "After version 1: ";
    print_vector(V);

    add_ten1(V);
    std::cout << "After version 2: ";
    print_vector(V);
    
    add_ten2(V);
    std::cout << "After version 3: ";
    print_vector(V);
    return 0;
}