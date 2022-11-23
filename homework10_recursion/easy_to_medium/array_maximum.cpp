#include <iostream>
#include <cmath>
using namespace std;

int arr_max(int arr[], int len)
{
    if(len == 1)
        return arr[0];
    int maximum = arr_max(arr, len -1);
    //compare the max u have so far with the last element
    return max(maximum, arr[len-1]);
}



int main()
{
    int arr[] = {1,8,2,10,3};
    cout << arr_max(arr,5) << endl;
    return 0;
}