#include <iostream>
using namespace std;

int main()
{   
    string input, substring;
    cin >> input >> substring;

    for (int i = 0; i < (input.size()-substring.size()+1); i++)
    {
        bool match = true;
        for (int j = 0; j < substring.size() && match; j++)
        {
            if (input[i+j] != substring[j])
            {
                match = false;
            }
        }
        if(match)
        {
            cout << "YES\n";
            return 0;
        }

        
    }
    cout << "NO\n"; 
    return 0;
}