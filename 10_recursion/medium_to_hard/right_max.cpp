#include <iostream>
#include <cmath>
using namespace std;

void right_max(int arr[], int len, int start = 0)
{
    if(start == len-1)
        return;

    right_max(arr, len, start+1);
    arr[start] = max(arr[start],arr[start+1]);
    
}

int main()
{
    int arr[] = {1,3,5,7,4,2};
    right_max(arr, 6, 0);

    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}