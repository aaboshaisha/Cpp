#include <iostream>
#include <map>
#include <stack>
#include <vector>


std::map<int, int> dict;

void check_next_greater (int val, std::stack<int> &s) {
    if(s.empty()){
        s.push(val);
        return;
    }
    else{
        // check val against top of stack
        if(val > s.top()){
            dict[s.top()] = val;
            s.pop();
            check_next_greater(val, s);
        }
        else{
            s.push(val);
            return;
        }
    }
}



int main(){
    std::vector<int> V {10, 5, 7, 15, 11};
    //std::vector<int> V {1, 2, 3, 4, 5};
    //std::vector<int> V {5, 4, 3, 2, 1};
    std::stack<int> s {};
    for(auto &x:V){
        dict[x] = -1;
    }

    for(auto &x:V){
        check_next_greater(x,s);
    }

    for(auto const &x:dict){
        std::cout << x.first << " " << x.second;
        std::cout << std::endl;
    }
    
    return 0;
}