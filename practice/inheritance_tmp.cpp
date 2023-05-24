#include <iostream>


class Rectangle{
    public:
    Rectangle(){
        width = 0;
        height = 0;
    }

    Rectangle(double initial_width, double initial_height){
        width = initial_width;
        height = initial_height;
    }

    double get_width(){
        return width;
    }    

    double get_height(){
        return height;
    }

    double get_area(){
        return get_width() * get_height();
    }

    private:
    double width;
    double height;

};

int main(){
    Rectangle R {6, 10};
    Square S {17};

    std::cout << R << std::endl;

    /* Task: make the code below work for squares by 
    defining a square to be a specialization of rectangle.

    std::cout << S << std::endl;
    std::cout << "Area of S: " << S.get_area() << std::endl;
    std::cout << "Side length of S: " << S.get_side_length() << std::endl;

    S.change_side_length(10);
    
    std::cout << S << std::endl;
    std::cout << "Area of S: " << S.get_area() << std::endl;
    std::cout << "Side length of S: " << S.get_side_length() << std::endl;

    */
    return 0;
}