#include <iostream>
using namespace std;

int main()
{
    string input;
    int count = 0;
    cin >> input;

    for (int i = 0; i <= input.size(); i++)
    {
        if (i != 0 && (input[i-1] != input[i]))
        {
            // new group: output the old and reset count
            cout << input[i-1] << count;
            count = 1;
            if(i < input.size())
            {
                cout << "_";
            }
        }
        else
        {
            count ++;
        }
        
    }
    cout << "\n";
    return 0;
}