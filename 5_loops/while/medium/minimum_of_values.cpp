#include <iostream>
using namespace std;

int main()
{
    int t = 0, T = 0, N = 0, x = 0;
    cin >> T;
    while (t < T)
    {
        t++;
        int n = 1;
        float min;
        cin >> N;
        if (N == 0)
        {
            cout << 0 << "\n";
            break;
        }
        cin >> min;   
        while (n < N)
        {   
            n++;
            cin >> x;
            if (x < min)
            {
                min = x;
            }
        }
        cout << min << "\n";
    }
}