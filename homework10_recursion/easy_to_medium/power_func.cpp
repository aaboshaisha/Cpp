#include <iostream>
using namespace std;
/*
There was a bug in this code where I had the base case be p = 1 returing >> value.
*/
int my_pow(int value, int p = 2)
{
    if(p == 0)
        return 1;
    return value * my_pow(value, --p);
}


int main()
{
    int value;
    int p;
    cin >> value >> p;
    cout << my_pow(value, p) << endl;
    return 0;
}