#include <iostream>
using namespace std;

int main()
{
    int n = 0, idx_min, idx_max;
    int arr[200] = {0};

    // Read input. Save to array
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 0)
    {
        cout << 0 << "\n";
    }
    else if (n == 1)
    {
        cout << arr[0] << "\n";
    }
    else
    {
        if (arr[0] < arr[1])
        {
            idx_min = 0;
            idx_max = 1;
        }
        else
        {
            idx_min = 1;
            idx_max = 0;
        }
        // Loop through the rest of the array and keep track of min and max indices
        for (int i = 2; i < n; i++)
        {
            if (arr[i] < arr[idx_min])
            {
                idx_min = i;
            }
            if (arr[i] > arr[idx_max])
            {
                idx_max = i;
            }
        }
        // swap min and max
        int tmp = 0;
        tmp = arr[idx_min];
        arr[idx_min] = arr[idx_max];
        arr[idx_max] = tmp;

        // print the result
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}