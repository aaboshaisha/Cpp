#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    // prompt user input
    cout << "Enter 3 numbers to sort: ";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (b < c)
        {
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            if (a<c)
                cout << a << " " << c << " " << b << "\n";
            else
                cout << c << " " << a << " " << b << "\n"; 
        }

    }
    else
    {
        if (b < c)
        {
            if (a < c)
            {
                cout << b << " " << a << " " << c << "\n";
            }
            else
            {
                cout << b << " " << c << " " << a << "\n";
            }
        }
        else
        {
            cout << c << " " << b << " " << a << "\n";
        }

    }
    return 0;
}