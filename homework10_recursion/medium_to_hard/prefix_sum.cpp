#include <iostream>
using namespace std;

int prefix_sum(int arr[], int len, int N)
{
    if(N > len)
    {
        cout << "Prefix length > Array length\n";
        return 1;
    }
    if(N == 1)
        return arr[N-1];
    //int partial_sum = prefix_sum(arr, len, N-1);
    //return partial_sum + arr[N-1];
    return arr[N-1] + prefix_sum(arr, len, N-1);
}

int main()
{
    int arr[] = {1,3,4,6,7};
    cout << prefix_sum(arr, 5, 1) << endl;
    cout << prefix_sum(arr, 5, 2) << endl;
    cout << prefix_sum(arr, 5, 3) << endl;
    cout << prefix_sum(arr, 5, 4) << endl;
    cout << prefix_sum(arr, 5, 5) << endl;
    return 0;
}