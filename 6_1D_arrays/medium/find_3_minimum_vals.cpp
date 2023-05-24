#include <iostream>
using namespace std;

int main()
{
    int n = 0, min1 = 2147483647, min2 = 2147483647, min3 = 2147483647;
    cin >> n;
    int arr[500] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            int tmp = min2;
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        }
        else
        {
            if (arr[i] < min2)
            {
                min3 = min2;
                min2 = arr[i];
            }
            else
            {
                if (arr[i] < min3)
                {
                    min3 = arr[i];
                }
                else
                {
                    continue;
                }
            }
        }
    }
    cout << min1 << " " << min2 << " " << min3 << "\n";


    return 0;
}