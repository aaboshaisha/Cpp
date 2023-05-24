#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    // Prompt user for input
    cout << "Enter a number: "; 
    cin >> n;
    bool is_even1 = (n % 2 == 0);
    bool is_even2 = (n - (n/2)*2 == 0);
    bool is_even3 = ((n%10 == 0) | (n%10 == 2) |(n%10 == 4) | (n%10 == 6) | (n%10 == 8)); 
    cout << is_even1 << " " << is_even2 << " " << is_even3 << "\n";

    return 0;
}