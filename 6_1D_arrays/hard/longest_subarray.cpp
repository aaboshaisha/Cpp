#include <iostream>
using namespace std;

int main()
{

    int arr[1000] = {0};
    int n = 0, longest = 0;

   
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // for each possible starting index
    for (int i = 0; i < n-1; i++)
    {
        // look at all possible sub-array sizes from largest to smalles
        for (int size = n-i-1; size > 1; size--)
        {
                // loop through its to sum its numbers
                int count_ones = 0, count_zeros = 0, cumsum = 0;
                 
                for (int j = i; j <= (i+size); j++)
                {
                    cumsum += arr[j];
                    if (arr[j] == 1)
                    {
                        count_ones ++;
                    }
                    if(arr[j] == 0)
                    {
                        count_zeros ++;
                    }
                }
                int final_sum = cumsum * 2;
                if (final_sum > longest && count_ones == count_zeros)
                {
                    longest = final_sum;
                }
                
        }
        
    }
    cout << longest << "\n";

    return 0;
}