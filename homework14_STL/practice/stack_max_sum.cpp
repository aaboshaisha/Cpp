#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

int vsum( std::vector<int> V){
    int sum {};
    for(auto const &x:V){
        sum += x;
    }
    return sum;
}

int vmin( int a, int b, int c){
    return std::min(a,std::min(b,c));
}


int max_stacks_sum( std::vector<int> &a, std::vector<int> &b, std::vector<int> &c){
    int minimum { vmin(vsum(a), vsum(b), vsum(c)) };

    while(!(vsum(a) == vsum(b) && vsum(b) == vsum(c))){

        if(minimum == 0)
            break;

        if(vsum(a) < minimum)
            minimum = vsum(a);
        if(vsum(b) < minimum)
            minimum = vsum(b);
        if(vsum(c) < minimum)
            minimum = vsum(c);

        if(vsum(a) > minimum)
            a.pop_back();
        if(vsum(b) > minimum)
            b.pop_back();
        if(vsum(c) > minimum)
            c.pop_back();
        
    }
    return minimum;
}


int main(){

    //test code
    std::vector<int> test {1,2,3,4,5};
    std::vector<int> A {1,2,3,4};
    std::vector<int> B {2,2,2,4,0};
    std::vector<int> C {20,3,3,5};

    //std::cout << vsum(test) << std::endl;
    //std::cout << vmin(10,2,3) << std::endl;


    //
    int minimum  {};
    //minimum = vmin(vsum(A), vsum(B), vsum(C));
    minimum = max_stacks_sum(A,B,C);
    std::cout << "Minimum of 3 vectors is: " << minimum << std::endl;

    

    return 0;
}