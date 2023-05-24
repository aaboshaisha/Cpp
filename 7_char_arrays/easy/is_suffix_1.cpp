#include <iostream>
using namespace std;

int main()
{
    string input, suffix;
    cin >> input >> suffix;

    if (suffix.size() > input.size())
    {
        cout << "NO\n";
        return 0;
    }

    int start = input.size() - suffix.size();

    for (int i = start; i < input.size(); i++)
    {
        if (input[i] != suffix[i-start])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}