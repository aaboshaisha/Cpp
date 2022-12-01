#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int i {6};
    std::cout << i << std::endl;

    vector<string> words;

    // populate the vector
    words.push_back("Simon");
    words.push_back("is");
    words.push_back("a");
    words.push_back("fish");

    for(int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << endl;


    // task 0: create an empty vector V for integer elements
    std::vector<int> V {};

    // task 1: add elements 6, 10, 17 to V
    V.push_back(6);
    V.push_back(10);
    V.push_back(17);

    // task 2: print out size of V
    std::cout << V.size() << std::endl;
    // task 3: print out element at index 1 of V
    std::cout << "Element at index 1 of V is: " << V.at(1) << std::endl;
    // task 4: Iterate over V and print out each element
    for(int x : V){
        std::cout << "Element: " << x << std::endl;
    }
    // task 5: use an indexing loop (ie: C style for-loop) to iterate
    for(int i = 0; i < V.size(); i++){
        std::cout << "Element at index " << i << " is " << V.at(i) << std::endl;
    }

    // task 6: add the value 187 to the end of V, then repeat steps 2-4 
    V.push_back(187);
    for(int x : V){
        std::cout << "Element: " << x << std::endl;
    }

    // task 7: create a vector W of elements type float containing the sequence
    // 10.6, 1.87, 11.1, 11.6, 4.45
    std::vector<float> W {10.6, 1.87, 11.1, 11.6, 4.45};

    // task 8: print the contents of the vector on one line
    for(float x:W){
        std::cout << x << " ";
    }
    std::cout << endl;
    // task 9: modify the element at idx 1 to equal 999
    W.at(1) = 999;
    for(float x:W){
        std::cout << x << " ";
    }
    std::cout << endl;
    // weigh the benefits of the .at() vs [ ]
    std::cout << "Using C style array indexing doesn't warn us and steps over memory in another location \n";
    //W[5] = 666;
    std::cout << "Using .at() should warn us" << endl;
    //W.at(5) = 666;

    // task 10: copy/paste loop from task 2 to print the vector again
    for(float x:W){
        std::cout << x << " ";
    }
    std::cout << endl;


    return 0;
}