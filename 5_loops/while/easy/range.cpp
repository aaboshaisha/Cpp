#include <iostream>
using namespace std;

int main()
{
    int x, y = 0;
    cout << "Enter two numbers X and Y: "; 
    cin >> x >> y;

    while (x < y+1)
    {
        cout << x << "\n";
        x++;
    }
    return 0;
}