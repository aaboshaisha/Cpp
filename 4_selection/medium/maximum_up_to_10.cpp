#include <iostream>
using namespace std;

int main()
{
    int n, x, max = 0;
    // user input
    cout << "Enter N followed by N numbers: ";
    cin >> n >> x; 
    max = x;

    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}
    if (n > 1){n -= 1;cin >> x; if (x > max){max = x;}}

    cout << max << "\n";

    return 0;
}