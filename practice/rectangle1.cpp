#include <iostream>



class Rectangle{
    private:
    double width {0};
    double height {0};

    public:
    // Task: Add default constructor (initializes rectangle to have
    // width = height = 0) and a parameterized constructor which 
    // takes a width and height )and verifies they are valid
    Rectangle(){
        width = 0;
        height = 0;
    };

    Rectangle(double the_width, double the_height){
        width = the_width;
        height = the_height;
    };

    // Task: Add get_width and get_height functions which return the 
    // width and height of this rectangle
    double get_width(){
        return width;
    }
    
    double get_height(){
        return height;
    }
    // Task: Add a get_area() function which returns area of rectangle
    double get_area() const{
        return width * height;
    }

    // Task: add a static member func create_unit_square which creates and 
    // returns a rectangle with width and height = 1
    static Rectangle create_unit_square(){
        return Rectangle(1,1);
    }


    // Add destructor. Let it print something that tells u what is happening
    // notice destruction order is reverse of construction order (socks and shoes)
    // ie: if u put socks on first then shoes, u can only take off shoes first then socks
    ~Rectangle(){
        std::cout << "Calling Destructor" << std::endl;
        print();
    };


    // Add a function that prints out the width and height and uses const Rectangle
    void print(){
        std::cout << "W: " << get_width() << std::endl;
        std::cout << "H: " << get_height() << std::endl;
    }


};

void print_area(Rectangle const & R){
    std::cout << "Using const to print " << R.get_area() << std::endl;
    }


// Another initialization style u should get used to

class Point{
    private:
    double x, y;
    
    public:
    Point(): x{0}, y{0} {
    } // Default constructor

    Point(double x_val, double y_val): x {x_val}, y {y_val} {
    }


};

int main(){

    Rectangle R {}; // this uses default constructor

    Rectangle R2 {6, 10}; // this uses parameterized costructor

    
    std::cout << "R has width " << R.get_width() << std::endl;
    std::cout << "R has height " << R.get_height() << std::endl;
    std::cout << "R has area " << R.get_area() << std::endl; 

    std::cout << "R2 has width " << R2.get_width() << std::endl;
    std::cout << "R2 has height " << R2.get_height() << std::endl;
    std::cout << "R2 has area " << R2.get_area() << std::endl; 

    Rectangle s  {Rectangle::create_unit_square()};
    std::cout << "S has width " << s.get_width() << std::endl;
    std::cout << "S has height " << s.get_height() << std::endl;


    print_area(s);

    return 0;
}