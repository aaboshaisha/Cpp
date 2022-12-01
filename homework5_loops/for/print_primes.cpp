#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    bool is_prime; 
    // go through numbers 2 to n
    for (int i = 2; i <= n; i++)
    {
        // see if they are prime
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {
                is_prime = false;
                break;
            }
            else
            {
                is_prime = true;
            }
            
        }
        if (is_prime)
        {
            cout << i << ", ";
        }
    }
    cout << "\n"; 
    return 0;
}