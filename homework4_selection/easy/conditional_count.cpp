#include <iostream>
using namespace std;

int main()
{
    int X, a,b,c,d,e, greater_than_x = 0;
    // user input 
    cout << "Enter a number X followed by 5 numbers: ";
    cin >> X >> a >> b >> c >> d >> e;
    if (a > X)
        greater_than_x +=1; 
    if (b > X)
        greater_than_x +=1; 
    if (c > X)
        greater_than_x +=1; 
    if (d > X)
        greater_than_x +=1; 
    if (e > X)
        greater_than_x +=1;
    cout << (5 - greater_than_x) << " " << greater_than_x << "\n";

    return 0;
}