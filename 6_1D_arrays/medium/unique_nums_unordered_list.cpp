#include <iostream>
using namespace std;

int main()
{
    int printed_before[501] = {0};
    int n = 0, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (printed_before[x] > 0)
        {
            continue;
        }
        else
        {
            cout << x << " ";
            printed_before[x] += 1;
        }
    }
    cout << "\n";
    
    return 0;
}