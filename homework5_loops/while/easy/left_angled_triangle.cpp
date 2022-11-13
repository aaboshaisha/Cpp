#include <iostream>
using namespace std;

int main()
{
    int i = 0, n = 0;
    cout << "Enter an integer: ";
    cin >> n;
    while (i < n)
    {
        i ++;
        int j = i;
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        cout << "\n";
    }

   
    return 0;
}