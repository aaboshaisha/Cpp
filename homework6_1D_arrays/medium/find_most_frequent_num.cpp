#include <iostream>
using namespace std;

int main()
{
    int numbers_arr[400] = {0};
    int frequency_arr[771] = {0};
    int n = 0, max_repeats = 0, idx = 0; 

    cin >> n;
    // populate the numbers and frequency arrays
    for (int i = 0; i < n; i++)
    {
        cin >> numbers_arr[i];
        frequency_arr[numbers_arr[i]+500] +=1;
    }

    // Loop through frequency array to get the maximum repeated num
    for (int i = 0; i < 771/a; i++)
    {
        if (frequency_arr[i] > max_repeats)
        {
            max_repeats = frequency_arr[i];
            idx = i-500;
        }
    }
    cout << idx << " repeated " << max_repeats << " times: the largest \n";


    return 0;
}