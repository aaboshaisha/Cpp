#include <iostream>
using namespace std;

int main()
{
    string input, prefix;
    // user input
    cin >> input >> prefix;

    // if prefix > input ; it can't be a prefix
    if (prefix.size() > input.size())
    {
        cout << "NO\n";
        return 0;
    }

    for (int i = 0; i < prefix.size(); i++)
    {
        if (prefix[i] != input[i])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}