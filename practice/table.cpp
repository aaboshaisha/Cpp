#include <iostream>
#include <vector>

int main(){

    /* Create a table T of integer values with 3 rows and 5 columns.
    Notice that the elements in the initializer for T are 
    initializers for 1D vectors.
    Note that "jagged" tables are possible (rows are not required to 
    have the same size )*/

    std::vector < std::vector <int> > T {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // print the table with for-each loops
    //first loop through the rows
    std::cout << "Printing using for-each: " << std::endl;
    for(auto &row:T){
        //then loop through each entry / column in row
        for(auto & val:row ){
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }


    // print the table with traditional indexing loop
    std::cout << "Printing using traditional indexing: " << std::endl;
    for(unsigned int i {0}; i < T.size(); i++){
        for(unsigned int j{0}; j < T.at(i).size(); j++){
            std::cout << T.at(i).at(j) << " ";
    }
    std::cout << std::endl;
    }
}