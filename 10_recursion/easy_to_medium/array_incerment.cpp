#include <iostream>
using namespace std;

void array_increment(int arr[], int len)
{
    static int idx = 0;
    arr[idx] += idx;
    if(idx == len-1)
        return;
    ++idx;
    return array_increment(arr, len);
}

int main()
{
    int arr[100];
    int len;
    cin >> len;
    for(int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    
    array_increment(arr,len);

    // print out to see
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}