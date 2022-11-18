#include <iostream>
using namespace std;

int main()
{
    string input, suffix;
    cin >> input >> suffix;

    int start = input.size() - suffix.size();
    bool is_suffix = true;

    for (int i = start; i < input.size(); i++)
    {
        if (input[i] != suffix[i-start])
        {
            is_suffix = false;
            break;
        }
    }

    if (is_suffix)
        cout << "YES" <<"\n";
    else
        cout << "NO" << "\n";

    return 0;
}