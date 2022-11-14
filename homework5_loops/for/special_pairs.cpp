#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;

    for (int i = 50; i < 301; i++)
    {
        for (int j = 70; j < 401; j++)
        {
            if (i < j && (i+j) % 7 == 0)
            {
                cnt += 1;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}