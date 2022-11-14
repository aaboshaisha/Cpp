#include <iostream>
using namespace std;

int main()
{
    int N = 0; string s;
    // user input
    cout << "Enter an integer N followed by N strings :";
    cin >> N;
    while (N > 0)
    {
        N--;
        cin >> s;
        if (s == "NO" || s == "no" || s == "No" || s == "nO"
        || s == "ON" || s == "on" || s == "On" || s == "oN")
            cout << s << " ";
    }
    cout << "\n";
    return 0;
}