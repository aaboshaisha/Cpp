#include <iostream>
using namespace std;

int main()
{   const int N = 201;
    int arr[N] = {0};
    int occured[N*10] = {0};
    // first value in sequence is 0
    // first value in occured for 0 is now 1
    occured[0] = 1;

    // get user input
    int x = 0, next_value = 0;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        next_value = arr[i-1] - (i-1) - 1;
        if (next_value < 0 || occured[next_value])
        {
            next_value = arr[i-1] + (i - 1) + 1;
        }
        occured[next_value] = 1;
        arr[i] = next_value;
    }
    cout << arr[x] << "\n";
    return 0;
}