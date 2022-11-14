#include <iostream>
using namespace std;

int main()
{
    int n = 0, m = 0, i = 1, j = 1;
    // usr inp
    cout << "Enter two numbers: ";
    cin >> n >> m;
    while (i <= n)
    {
        while (j <= m)
        {
            cout << i << " * " << j << " = " << i * j << "\n";
            j++;
        }
        j = 1;
        i++; 
    }
    return 0;
}