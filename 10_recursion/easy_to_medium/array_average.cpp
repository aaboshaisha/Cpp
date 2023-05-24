#include <iostream>
using namespace std;


double average(int arr[], int len)
{
    static int idx = 0;
    if (idx == len-1)
        return arr[idx]*1.0/len;
    return (arr[idx++]*1.0/len + average(arr,len));
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
    cout << average(arr, len) << endl;
    
    return 0;
}