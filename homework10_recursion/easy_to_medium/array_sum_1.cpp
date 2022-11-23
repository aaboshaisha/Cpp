#include <iostream>
using namespace std;

int sum(int arr[], int len)
{
    if(len == 1)
        return arr[0];
    int partial_sum = sum(arr, len-1);
    return partial_sum + arr[len-1];
}

int main()
{
    int sz = 6;
    int arr[5] = {1,2,3,4,5};
    cout << sum(arr,sz) << endl;
    return 0;
}