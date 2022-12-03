/* Task 1: Write a rectangle and triangle. Compute their areas
   Task 2 :Given a vector of ints / strings and an element to search
   for, return true if the element is found. Else return false
   eg: V {"apple", "banana", "orange"}
   eg: W {6, 10, 17} */


#include <iostream>


struct Rectangle{
    double length {0};
    double width {0};
};

struct Triangle{
    double base {0};
    double height {0};
};

double get_area(Rectangle R){
    return R.length * R.width;
}

double get_area(Triangle T){
    return 0.5 * T.base * T.height;
}

int main(){

    Rectangle R {2, 3};
    std::cout << get_area(R) << std::endl;

    Triangle T {4, 2};
    std::cout << get_area(T) << std::endl;

    return 0;
}
