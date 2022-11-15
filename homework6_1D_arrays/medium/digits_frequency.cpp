#include <iostream>
using namespace std;

int main()
{
    //int nums_arr[400] = {0};
    int freq_arr[10] = {0};
    int n = 0, x = 0, d = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // find its digits
        if (x == 0)
        {
            freq_arr[x] +=1;
        }
        while (x)
        {
            d = x % 10;
            freq_arr[d] +=1;
            x /= 10;
        }
    }

    // print frequencies
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << freq_arr[i] << "\n";
    }
    
    return 0;
}