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


    bool is_pre = true;

    for (int i = 0; i < prefix.size(); i++)
    {
        if (prefix[i] != input[i])
        {
            is_pre = false;
            break;
        }

    }
    if(is_pre)
    {
        cout << "YES" <<"\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}