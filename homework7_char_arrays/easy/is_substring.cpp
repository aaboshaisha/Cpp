#include <iostream>
using namespace std;

int main()
{   
    string input, substring;
    cin >> input >> substring;
    int start = 0; 
    bool is_sub = false;

    // find if first letter in substring exists in input
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == substring[0])
        {
            is_sub = true;
            start = i;
            break;
        }
        else
        {
            continue;
        }
    }

    // see if rest of letters match
    if (is_sub)
    {
        for (int i = 0; i < substring.size(); i++)
        {
            if (input[i+start] != substring[i])
            {
                is_sub = false;
                cout << "NO" << "\n";
                return 0;
            }
            else
            {
                is_sub = true;
            }
        }
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}