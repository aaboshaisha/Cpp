#include <iostream> 
using namespace std;

int main()
{
    int T = 0, N = 0, x = 0, pos = 0, tmp_x = 0;
    cin >> T;
    while (T > 0)
    {
        T --;
        int sum = 0;
        cin >> N;
        pos = 0;
        while (N > 0)
        {
            N --;
            pos ++;
            int i = pos;
            cin >> x;
            tmp_x = x;
            while (i > 1)
            {
                x *= tmp_x;
                i --;
            }
            sum += x;
        }
        cout << sum << "\n";

    } 
    return 0;
}