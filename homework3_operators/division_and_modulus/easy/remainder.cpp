#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    cout << "Enter two numbers: ";
    cin >> n >> m;
    cout << "The remainder of their division: " << (n - (n/m)*m) << "\n"; 
    return 0;
}