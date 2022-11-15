#include <iostream>
using namespace std;

int main()
{
    int arr[900] = {0};
    int n = 0, tmp = 0;
    cin >> n;

    // populate the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort the array
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }

    // print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}