#include <iostream>
using namespace std;

int suffix_sum(int arr[], int len, int N)
{
    if(N == 1)
        return arr[len-1];
    //int partial_sum = suffix_sum(arr, len-1, N - 1);
    //return arr[len-1] + partial_sum;
    return arr[len-1] + suffix_sum(arr, len-1, N - 1);
}

int main()
{
    int arr[] = {1, 3, 4, 6, 7};
    cout << suffix_sum(arr, 5, 1) << endl;
    cout << suffix_sum(arr, 5, 2) << endl;
    cout << suffix_sum(arr, 5, 3) << endl;
    cout << suffix_sum(arr, 5, 4) << endl;
    cout << suffix_sum(arr, 5, 5) << endl;
    return 0;
}