#include <iostream>
#include <vector>
#include <set>

std::multiset<int> ms {};

std::vector<int> max_sliding_window ( std::vector<int> V, int k ){
    std::vector<int> results {};

    for(int i {}; i < k; i++){
        ms.insert(-1 * V.at(i));
    }
    results.push_back(- *ms.begin());

    for(int i = k; i < (int) V.size() ; i++){
        // remove first element
        ms.erase(ms.find(-V.at(i-k)));
        // insert last 
        ms.insert(- V.at(i));
        results.push_back (- *ms.begin());
    }

    return results;

}

void print_vector(std::vector<int> V){
    for(auto x:V){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::vector<int> V {1, 3, -1, -3, 5, 3, 6, 7};
    print_vector (max_sliding_window(V, 3)); 
    return 0;
}
