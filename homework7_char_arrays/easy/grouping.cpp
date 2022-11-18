#include <iostream>
using namespace std;

int main()
{
    string input;
    char seen;
    cin >> input;
    cout << input[0];
    seen = input[0];
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] == seen)
        {
            cout << input[i];
        }
        else
        {
            cout << " " << input[i];
        }
        seen = input[i];
    }
    cout << "\n";

    return 0;
}