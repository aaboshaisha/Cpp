#include <iostream>
using namespace std;

int main()
{
    int n = 0; 
    cout << "Enter a number: ";
    cin >> n;
    int d1 = n % 10;
    int d2 = (n%100) / 10;
    int d3 = (n%1000) / 100;

    cout << d1 + d2 + d3 << "\n";
    return 0;
}