#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void set_powers(int arr[], int len = 5, int m = 2)
{
    for(int i = 0; i < len; i++)
    {
        arr[i] = pow(m, i);
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // get user input
    cout << "Pleae enter length of array and base: ";
    int arr[100];
    int len, m;
    cin >> len >> m;
    set_powers(arr, len, m);
    return 0;
}