#include <iostream>
using namespace std;

void reverse_str(const string &str)
{
    for (int i = str.size()-1; i >= 0;i--)
    {
        cout << str[i];
    }
    cout << "\n";
}

int main()
{
    string input;
    cin >> input;
    reverse_str(input);

    return 0;
}