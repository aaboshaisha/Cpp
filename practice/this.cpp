#include <iostream>


class Point{
    private:
    double x;
    double y;

    public:
    Point(): Point{0,0} {
        //this is the default constructor
    }

    Point(double x, double y) {
        // Initialize the two members of this object x and y to have the 
        // values of x and y in the arguments above
        // ie: the members x,y of "this" object = args(x,y) 
        // the dilemma: same name x,y for args and members. Which refers to which?
        this ->x = x;
        this ->y = y;

        /*
        this->x : refers to the class member x
        x : refers to the name of the argument provided to the constructor

        this-> is a pointer 
        to get the object it refers to use : *this (C-style stuff)
        */
    }

    double get_x() const{
        return x;
    }

    double get_y() const{
        return y;
    }


};



int main(){

    return 0;
}