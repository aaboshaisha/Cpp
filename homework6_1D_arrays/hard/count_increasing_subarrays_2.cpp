#include <iostream>
using namespace std;

int main()
{
    int arr[200] = {0};
    int n = 0;
    cin >> n;

    // populate the array
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = 1;
    int result = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[i-1])
        {
            result += len;
            cout << "Result is: " << result <<"\n";
            len++;
        }
        else
        {
            len = 1;
        }
    }
    cout << result + n << "\n";
    return 0;
}