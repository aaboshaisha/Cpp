#include <iostream>
#include <queue>


struct last_k_numbers_sum_stream{
    int k;
    int sum{};
    std::queue<int> q {};

    last_k_numbers_sum_stream (int _k){
        k = _k;
    }

    int next (int new_num){
        q.push(new_num);

        if(k > 0){
            sum += new_num;
            k--;
        }
        else {
            sum += (new_num - q.front());
            q.pop();
        }

        return sum;
    }
};

int main(){
    last_k_numbers_sum_stream processor(4);

    int num;
    while(std::cin >> num){
        std::cout << "Current sum: ";
        std::cout << processor.next(num) << std::endl;
    }
    return 0;
}
