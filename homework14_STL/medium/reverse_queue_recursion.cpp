#include <iostream>
#include <queue>


void reverse_queue(std::queue<int> &q){
    if(q.size() == 1){
        return;
    }
    int fr = q.front();
    q.pop();
    reverse_queue(q);
    q.push(fr);
}



int main(){
    std::queue<int> q {};
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    reverse_queue(q);

    while(!q.empty()){
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
    return 0;
}