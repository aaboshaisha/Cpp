#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if (a <= b)
        cout << a << " less than " << b << endl;
    else
        cout << b << " less than " << a << endl;
    
    return 0;
}