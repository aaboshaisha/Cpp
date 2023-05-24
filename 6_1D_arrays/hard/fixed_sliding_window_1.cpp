#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0, start_idx = 0, max = 0, sum = 0;
    int arr[201];
    // populate array
    cin >> k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find sum of 1st k-elements
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    // set max to this sum
    max = sum;

    // Loop through remainng indices till n-k+1 each time removing
    // the first index and adding the last to see 
    for (int i = 1; i < (n-k+1); i++)
    {
        sum = sum - arr[i-1] + arr[i+k-1];
        if (sum > max)
        {
            max = sum;
            start_idx = i;
        }
    }
    cout << start_idx <<" "<< (start_idx + k - 1) << " " << max << "\n";
    return 0;
}