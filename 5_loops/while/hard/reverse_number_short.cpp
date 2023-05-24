#include <iostream>
using namespace std;

int main()
{
    int n = 0, r = 0;
    // usr input
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
        int d = 0;
        d = n % 10;
        r = (r * 10) + d;
        n /= 10;
    }
    cout << "Reversed number is: " << r << "\n";
    return 0;
}