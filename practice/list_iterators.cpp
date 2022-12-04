#include <iostream>
#include <stdexcept>
#include <list>

/* 
list_sum_elementwise(L1, L2)
given two lists L1, L2 of equal size, return a new list 
whose elements are the sum of the corresponding elements of L1 and L2

For example with:
L1: 6   10  17
L2: 116 187 111
result will be:
    122 197 128

If the two input lists do not have equal size, throw an instance of 
std::invalid_argument
*/

std::list<int> list_sum_elementwise( std::list<int> const &L1, std::list<int> const &L2){
    if (L1.size() != L2.size()){
        throw std::invalid_argument {"Lists must be of equal size"};
    }
    std::list<int> sum {};
    auto iter2 = L2.begin();
    for (auto iter1 = L1.begin(); iter1 != L1.end(); iter1++){
        sum.push_back(*iter1 + *iter2);
        iter2++;
    }
    return sum;
}


int main(){
   std::list<int> L1  {6, 10, 17};
   std::list<int> L2 {116, 187, 111};

   std::list<int> sum  = list_sum_elementwise(L1, L2) ;

   for(int &x:sum){
    std::cout << x << " ";
   } 
   std::cout << std::endl;

    return 0;
}