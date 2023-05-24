#include <iostream>
#include <queue>

struct stack{
    std::queue<int> q;

    void push(int val){
        int size {(int) q.size()};
        q.push(val);
        while(size){
            q.push(q.front());
            q.pop();
            size--;
        }
        
    }

    void pop(){
        if(!q.empty()){
            q.pop();
        }
    }

    int top(){
        return q.front();
    }

    bool empty(){
        return q.empty();
    }

};


int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}