#include <iostream>


class Rectangle{
    public:
    // Task: Add default constructor (initializes rectangle to have
    // width = height = 0) and a parameterized constructor which 
    // takes a width and height )and verifies they are valid

    // Task: Add get_width and get_height functions which return the 
    // width and height of this rectangle

    // Task: Add a get_area() function which returns area of rectangle


    // Task: add a static member func create_unit_square which creates and 
    // returns a rectangle with width and height = 1


    // Add destructor. Let it print something that tells u what is happening
    // notice destruction order is reverse of construction order (socks and shoes)
    // ie: if u put socks on first then shoes, u can only take off shoes first then socks


    // Add a function that prints out the width and height and uses const Rectangle


    double width {0};
    double height {0};
}


int main(){

    Rectangle R {}; // this uses default constructor

    Rectangle R2 {6, 10}; // this uses parameterized costructor

    std::cout << "R has width " << R.get_width() << std::endl;
    std::cout << "R has height " << R.get_height() << std::endl;
    std::cout << "R has area " << R.get_area() << std::endl; 

    std::cout << "R2 has width " << R2.get_width() << std::endl;
    std::cout << "R2 has height " << R2.get_height() << std::endl;
    std::cout << "R2 has area " << R2.get_area() << std::endl; 

    return 0;
}