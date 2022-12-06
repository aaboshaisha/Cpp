#include <iostream>
#include <queue>
#include <stack>


void reverse_queue(std::queue<int> &q){
    std::stack<int> s {};
    int len = q.size();

    for(int i {}; i < len; i++){
        s.push(q.front());
        q.pop();
    }

    for(int i {}; i < len; i++){
        q.push(s.top());
        s.pop();
    }

}






int main(){

    std::queue<int> q {};
    for(int i {}; i < 4; i++){
        q.push(i);
    }
    reverse_queue(q);

    for(int i {}; i < 4; i++){
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}