#include <iostream>

void F(int x){
    x = x + 10;
}

void G(int& x){
    x = x + 10;
}

int main(){

    int x{100};

    std::cout << "x is " << x << std::endl;

    x = 6;
    std::cout << "x is " << x << std::endl;

    // task: create an alias "y" for the variable x and 
    // use y to set the value of x to 1000
    int& y {x};
    y = 1000;

    std::cout << "x is " << x << std::endl;

    //task: create an alias "z" for the variable x 
    // using the auto keyword, then use z to set the value
    // of x to 999
    int& z {x};
    z = 999;

    std::cout << "x is " << x << std::endl;


    // write two functions that demonstrate the usefulness of the above
    // (add 10 to input)
    // see above

    F(x);
    std::cout << x << std::endl;
    G(x);
    std::cout << x << std::endl;



    return 0;
}