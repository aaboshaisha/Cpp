/*
Key idea for solving this: for an intersection to exist, on of the 2 numbers of
one interval must be inside the other.
*/

#include <iostream>
using namespace std;

int main()
{
    int s1, e1, s2, e2 = 0;
    // user input
    cout << "Enter 4 numbers: "; 
    cin >> s1 >> e1 >> s2 >> e2; 

    // Check if s1 is inside {s2,e2} interval
    if (s1 >= s2 && s1 <= e2)
    {   
        // if yes, check if e1 is inside {s2,e2} / same interval
        if (e1 >= s2 && e1 <= e2)
            cout << s1 << " " << e1 << "\n";
        else
            cout << s1 << " " << e2 << "\n";
    }
    // if not; check if s2 is inside {s1,e1} interval
    else
    {
        if (s2 >= s1 && s2 <= e1)
        {   
            // if yes; check if e2 is also inside {s1,e1} interval
            if (e2 >= s1 && e2 <= e1)
                cout << s2 << " " << e2 << "\n";
            else
                cout << s2 << " " << e1 << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}