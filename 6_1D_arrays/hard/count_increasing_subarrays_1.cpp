// Solution using accumulation arrays idea
#include <iostream>
using namespace std;

int main()
{
    const int N = 201;
    int arr[N] = {0};
    int count = 0;
    
    // usr input
    int n = 0;
    cin >> n;
    // Build the accumulation array
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }

    for (int k = 1; k <= n; k++)
    {
        int sum = 0;
        for (int i = k; i <= n; i++)
        {
            if (arr[i] - arr[i-k] > sum)
            {
                count++;
            }
            sum = arr[i] - arr[i-k] ;
        }
    }
    cout << count << "\n";
    return 0;
}