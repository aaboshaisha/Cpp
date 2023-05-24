#include <iostream>
using namespace std;

int main()
{
    int arr[201] = {0};
    int appeared_before[10000] = {0};
    appeared_before[0] += 1;
    int last_val = 0, last_idx = 0, next_val = 0;

    for (int i = 1; i < 201; i++)
    {
        next_val = last_val - last_idx -1;
        if (next_val < 0 || appeared_before[next_val] > 0)
        {
            next_val = last_val + last_idx + 1;
        }         
        arr[i] = next_val;
        appeared_before[next_val] +=1;
        last_val = next_val;
        last_idx = i;
    }
    // Read user input
    int x = 0;
    cin >> x;
    cout << arr[x] << "\n"; 
    return 0;
}