#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter an integer: ";
    cin >> n;
    while (n > 0)
    {
        int j = n;
        n--;
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        cout << "\n";
    }

   
    return 0;
}