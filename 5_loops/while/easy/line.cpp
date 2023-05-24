#include <iostream> 
using namespace std;

int main()
{
    int n = 0;
    char c;
    // user input
    cout << "Enter a number followed by a character: ";
    cin >> n >> c;
    while (n > 0)
    {
        cout << c;
        n --;
    }
    cout << "\n";
    return 0;
}