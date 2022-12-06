#include <iostream>
#include <queue>

struct stack{
    std::queue<int> q;

    void reverse_queue(std::queue<int> &q){
    if(q.size() == 1){
        return;
    }
    int fr = q.front();
    q.pop();
    reverse_queue(q);
    q.push(fr);
    }

    void push(int val){
        q.push(val);
        reverse_queue(q);
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