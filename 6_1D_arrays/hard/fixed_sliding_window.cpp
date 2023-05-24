#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0, start_idx = 0, max = INT_MIN;
    int arr[201];
    // populate array
    cin >> k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < (n-k+1); i++)
    {
        int sum = 0;
        for (int j = i; j <= (i+k-1); j++)
        {
            sum += arr[j];
        }
        if (sum > max)
        {
            max = sum;
            start_idx = i;
        }
    }
    cout << start_idx << " " << (start_idx + k - 1) << " " << max << "\n";
}