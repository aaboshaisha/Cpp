#include <iostream>
#include <stack>
#include <cmath>

int reverse_num(int num){
    std::stack<int> s {};

    int digit {};

    while(num > 0){
        // get the rightmost digit
        digit = num % 10;
        s.push(digit);
        num /= 10;
    }

    int rnum {};
    int k = s.size();
    for(int i {}; i < k; i++){
        rnum += (s.top() * pow(10,i));
        s.pop();
    }
    return rnum;
}

int main(){
    std::cout << "Enter a number >= 0: ";
    int num {};
    std::cin >> num;

    if(num <= 0){
        std::cout << "Invalid Number" << std::endl;
        return 0;
    }

    std::cout << reverse_num(num) << std::endl;
    return 0;
}