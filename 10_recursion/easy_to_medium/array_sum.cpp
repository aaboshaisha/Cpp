#include <iostream>
using namespace std;

int sum(int arr[], int sz)
{
    static int idx = 0;
    if(idx == sz-1)
        return arr[idx];
    ++idx;
    return arr[idx-1] + sum(arr,sz);
}

int main()
{
    int sz = 5;
    int arr[5] = {1,2,3,4,5};
    cout << sum(arr,sz) << endl;
    return 0;
}