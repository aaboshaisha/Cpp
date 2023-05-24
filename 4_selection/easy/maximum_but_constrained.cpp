#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    // user input
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    int max = -1;
    if (a < 100)
        max = a;
    if (b < 100)
        max = b;
    if (c < 100)
        max = c;

    if (a > max && a < 100)
        max = a;
    if (b > max && b < 100)
        max = b;
    if (c > max && c < 100)
        max = c;
    cout << max << "\n";


    return 0;
}