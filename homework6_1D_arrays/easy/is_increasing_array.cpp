#include <iostream>
using namespace std;

int main()
{
    // Declare array of size 200
    int arr[200] = {0};
    int n = 0;
    string is_increasing = "YES";
    // Read N
    cin >> n;
    // Loop through inputs and save them to array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] >= arr[i-1] && arr[i] <= arr[i+1])
            continue;
        else
        {
            is_increasing = "NO";
            break;
        }
    }
    cout << is_increasing << "\n";

    return 0;
}