#include <iostream>
using namespace std;

int main()
{
    string number;
    cin >> number;
    int mult = 1, final = 0;

    for (int i = number.size() -1; i > -1; i--)
    {
        int d = number[i] - 48;
        final += d * mult;
        mult *= 10;
    }
    cout << final << " " << final*3 << "\n";
    return 0;
}