#include <iostream>
using namespace std;

int main()
{
    int n = 0, cnt = 0;
    int arr[200] = {0};
    bool increasing = true;

    // Populate the array
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // For all subarrays of sizes 1 to n
    for (int k = 1; k <= n; k++)
    {
        // loop through all start indices 
        for (int i = 0; i < (n-k+1); i++)
        {
            // loop through sub-array
            for (int j = (i+k-1 j > i ; j--)
            {
                if (arr[j] < arr[j-1])
                {
                    increasing = false;
                    break;
                }
                else
                {
                    increasing = true;
                }
            }
            if (increasing)
            {
                cnt ++;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}