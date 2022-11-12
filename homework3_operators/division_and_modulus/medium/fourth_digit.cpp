#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << ((n%10000) / 1000) << "\n";
    return 0;
}