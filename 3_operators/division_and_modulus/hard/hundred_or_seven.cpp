#include <iostream> 
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n; 
    bool is_even = (n%2 == 0);
    cout << is_even * 100 + !is_even * 7 << "\n";
    return 0;
}