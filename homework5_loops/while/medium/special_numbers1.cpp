#include <iostream>
using namespace std;

int main()
{
    int N = 0, i = 0;
    cout << "Enter an integer N: ";
    cin >> N;

    while (i <= N)
    {
        if (i % 12 == 0 || i % 8 == 0)
            cout << i << " ";
        i ++;
    }
    cout << "\n";
    return 0;
}