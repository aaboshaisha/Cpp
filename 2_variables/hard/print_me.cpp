#include <iostream>
using namespace std;

int main()
{
    float a, b = 1.0;
    // Prompt user for input
    cout << "Enter Numbers A and B where B is either -1 or 1: ";
    cin >> a >> b;
    // One line formula
    cout << ((1-b)/2)*(2*a + 1) + ((1+b)/2) * (a*a) << endl;
    return 0;
}