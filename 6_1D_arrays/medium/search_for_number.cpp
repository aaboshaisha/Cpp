#include <iostream>
using namespace std;

int main()
{
    int arr[200] = {0};
    int n = 0, q = 0, x = 0;
    bool found;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> q;
    // cout << "q is: " << q << "\n";
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        for (int j = n-1; j > -1; j--)
        {
            if (x == arr[j])
            {
                cout << j << "\n";
                found = true;
                break;
            }
            else
            {
                found = false;
            }
        }
        if (!found)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}