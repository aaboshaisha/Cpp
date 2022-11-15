#include <iostream>
using namespace std;

int main()
{
    int n = 0, smallest = 0;
    int arr[200] = {0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    smallest = arr[1] + arr[2] + 2 - 1;

    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if ((arr[i] + arr[j] + j - i) < smallest)
            {
                smallest = (arr[i] + arr[j] + j - i);
            }
        }
    }
    cout << smallest << "\n";
    return 0;
}