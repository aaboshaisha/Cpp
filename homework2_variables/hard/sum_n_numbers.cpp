#include <iostream>
using namespace std;

int main()
{
    float n = 1.0;
    // Prompt user for input
    cout << "Enter an integer N: ";
    cin >> n; 
    cout << "Sum from 1 to N is: " << ((n-1)/2) * (n+1) + ((n+1)/2) << endl;

    return 0;
}