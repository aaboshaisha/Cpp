#include <iostream>
#include <deque>
#include <vector>
#include <cmath>

int collide(int a, int b){
    if(std::abs(a) > std::abs(b)){
        return a;
    }
    return b;
}

void check_before_push(int val, std::deque<int> &q){
    if(q.empty()){
        q.push_back(val);
    }
    else{
        // check if last element of queue is + while new is -
        if(q.back() >= 0 && val < 0){
            // check if equal abs value
            if(std::abs(q.back()) == std::abs(val)){
                // destroy 
                q.pop_back();
                return;
            }
            else{
                // decide a winner
                int winner = collide(q.back(), val);
                // remove the last element
                q.pop_back();
                check_before_push(winner, q);
            }
        }
        else{
            q.push_back(val);
        }
        
    }
}


int main(){
    //std::vector<int> v {10, 2, -5};
    //std::vector<int> v {8, -8};
    //std::vector<int> v {-2, -1, 1, 2};
    std::vector<int> v {5, 10, -5};
    //std::vector<int> v {10, 2, -5};
    std::deque<int> q {};

    for(auto &x:v){
        check_before_push(x, q);
    } 

    while(!q.empty()){
        std::cout << q.front() << " ";
        q.pop_front();
    }
    std::cout << std::endl;

    return 0;
}