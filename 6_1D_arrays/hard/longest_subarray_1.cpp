#include <iostream>
using namespace std;

int main()
{
    const int N = 1000;
    int n = 0, x = 0, count_zeros = 0, count_ones = 0, max_diff = 0;
    int diff_arr[N] = {0};
    int first_appeared[2*N];
    int last_appeared[2*N];

    for (int i = 0; i < 2*N; i++)
    {
        first_appeared[i] = 99999;
        last_appeared[i] = -99999;
    }
    cin >> n;
    // Loop through numbers and keep track of num 0s & 1s & their diff
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0)
        {
            count_zeros++;
        }
        else if (x == 1)
        {
            count_ones++;
        }
        
        int diff = count_zeros - count_ones;
        // record the difference itself (-1000 to 1000)
        diff_arr[i] = diff;
        
        if(first_appeared[diff+1000] == 99999)
        {
            first_appeared[diff+1000] = i;
        }
        if(i > last_appeared[diff+1000])
        {
            last_appeared[diff+1000] = i;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if (last_appeared[diff_arr[i]+1000] - first_appeared[diff_arr[i]+1000] > max_diff)
        {
            max_diff = last_appeared[diff_arr[i]+1000] - first_appeared[diff_arr[i]+1000];
        }
    }
    cout << max_diff << "\n";


    return 0;
}