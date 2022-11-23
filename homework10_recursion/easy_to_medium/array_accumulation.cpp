#include <iostream>
using namespace std;

void accumulate_arr(int arr[], int len)
{
    static int idx = 1;
    if(len == 0)
        return;
    arr[idx] += arr[idx-1];
    idx++;
    len--;
    return accumulate_arr(arr,len);
}



int main()
{   
    int arr[6] = {1,2,3,4,5,6};
    accumulate_arr(arr, 5);

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}