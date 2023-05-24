#include <iostream>
#include <cmath>
using namespace std;

void left_max(int arr[], int len)
{
    static int idx = 0;
    if(len == 0)
    {
        return;
    }
    arr[idx] = max(arr[idx], arr[idx-1]);
    idx++;
    len--;
    return left_max(arr,len);
}


int main()
{
    int arr[] = {1,3,5,7,4,2};
    left_max(arr, 6);
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}