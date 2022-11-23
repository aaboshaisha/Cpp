#include <iostream>
using namespace std;

void accumulate_arr(int arr[], int len)
{
    if(len == 1)
        return;
    arr[len-1] += arr[len-2];
    return accumulate_arr(arr, len-1);
}

int main()
{
    int arr[] = {1, 2, 3};
    accumulate_arr(arr, 3);
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}