#include <iostream>
using namespace std;

int main()
{
    int n = 0, x = 0, last_read = 0;
    cin >> n;
    cin >> x;
    last_read = x;
    cout << x << " ";

    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x != last_read)
        {
            cout << x << " ";
            last_read = x;
        } 
    }
    cout << "\n";
    return 0;
}