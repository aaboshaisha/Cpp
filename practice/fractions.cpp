#include <iostream>
#include <numeric>

class Fraction{
    private:
    int numerator;
    int denominator;

    public: 

    // constructor
    Fraction() {
        numerator = 0;
        denominator = 1;
    };

    Fraction(int x, int y){
        numerator = x;
        denominator = y;

        if(denominator == 0){
            throw std::invalid_argument{"Denominator must be non-zero"};
        }
    };


    // Getters
    int get_numerator() const{
        return numerator;
    }
    int get_denominator() const{
        return denominator;
    }    
    
    // lowest terms
    Fraction lowest_terms() const {
        auto common_devisor = std::gcd(numerator, denominator);
        return Fraction {numerator/common_devisor, denominator/common_devisor};
    }

};

    
// provide opertor to print the fraction out
/* Notice: this function can't be a member of the class Fraction*/
std::ostream& operator<< ( std::ostream& stream, Fraction const& F){
    stream << F.get_numerator() << "/" << F.get_denominator();
    return stream;
}

/*
Basic operations:
Lt: a/b
Rt: c/d

Addition: 

a/b + c/d = (ad + bc) / bd

Subtraction

a/b - c/d = (ad - bc) / bd

Multiplication

a/b * c/d = ac / bd

Division 

a/b / c/d = ad / bc

*/
// Functions for basic operations
Fraction operator+ (Fraction const& left, Fraction const& right){
    auto a = left.get_numerator();
    auto b = left.get_denominator();
    auto c = right.get_numerator();
    auto d = right.get_denominator();

    Fraction result { (a*d + b*c), b*d };
    return result.lowest_terms();
}

Fraction operator- (Fraction const& left, Fraction const& right){
    auto a = left.get_numerator();
    auto b = left.get_denominator();
    auto c = right.get_numerator();
    auto d = right.get_denominator();

    Fraction result { (a*d - b*c), b*d };
    return result.lowest_terms();
}


Fraction operator* (Fraction const& left, Fraction const& right){
    auto a = left.get_numerator();
    auto b = left.get_denominator();
    auto c = right.get_numerator();
    auto d = right.get_denominator();

    Fraction result { a*c, b*d};
    return result.lowest_terms();
}
    
Fraction operator/ (Fraction const& left, Fraction const& right){
    auto a = left.get_numerator();
    auto b = left.get_denominator();
    auto c = right.get_numerator();
    auto d = right.get_denominator();

    Fraction result { a*d, b*c};
    return result.lowest_terms();
}

int main(){

    Fraction x {6, 10};
    Fraction y {1, 6};
    Fraction z {3, 6};
    //Fraction t {1, 0};

    
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    
    std::cout << "x+y: " << x+y << std::endl;
    std::cout << "y+z: " << y+z << std::endl;
    std::cout << "x*y: " << x*y << std::endl;


    return 0;
}