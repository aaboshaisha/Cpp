#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    string prime; 
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && i != n)
        {
            prime = "NO";
            break;       
        }
        else
        {
            prime = "YES";
        }
    }
    cout << prime << "\n"; 
    return 0;
}