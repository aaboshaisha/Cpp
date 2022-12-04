#include <iostream>
#include <vector>
#include <string>

/* print vector (V)
print out each element in a vector of ints in forward order */

/*
void print_vector(std::vector<int> V){
    for(int &x:V){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
*/

// Task: rewrite this using and iterator instead of for-each loop
void print_vector(std::vector<int> V){
    for(auto iter = V.begin(); iter != V.end(); iter++){
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main(){

    std::vector<int> V {6, 8, 10, 17};

    std::cout << "Before: ";
    print_vector(V);


    // the .insert() func takes and iterator and a new element
    // and inserts the element in the position _before_ the iterator

    // Task: insert the element 100 at the beginning 
    auto iter = V.begin();
    V.insert(iter, 100);
   
    std::cout << "After insering element 100 at beginning: ";
    print_vector(V);

    // Task: insert element 0 at the end
    iter = V.end();
    V.insert(iter, 0);

    std::cout << "Inserting element 0 at the end: ";
    print_vector(V);

    // Task: get an iterator to the position of the third element (index 2), 
    // then insert 187 before that ()
    iter = V.begin();
    iter++;
    iter++;
    V.insert(iter, 187);

    std::cout << "Inserting 187 at index 2: ";
    print_vector(V);
    // the .erase() func takes an iterator and removes the correspoding 
    // element from the vector (shuffling elements as needed )

    // Task: remove the second element (at index 1)
    iter = V.begin();
    iter++;
    V.erase(iter);

    std::cout << "Removing the second element: ";
    print_vector(V);

return 0;
}