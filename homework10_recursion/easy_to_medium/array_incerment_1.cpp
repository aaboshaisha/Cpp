#include <iostream>
using namespace std;

void array_increment(int arr[], int len)
{
    if(len == 1)
        return;
    arr[len-1] += len-1;
    return array_increment(arr, len-1);
}

int main()
{
    int arr[] = {1,2,3,4};
    array_increment(arr,4);
    for(int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}