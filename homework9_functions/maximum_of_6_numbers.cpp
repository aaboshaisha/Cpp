#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int max_3(int a, int b, int c)
{
    return max(max(a,b),c);
}

int max_4(int a, int b, int c, int d)
{
    return max(max_3(a,b,c), d);
}

int max_5(int a, int b, int c, int d, int e)
{
    return max(max_4(a,b,c,d), e);
}

int max_6(int a, int b, int c, int d, int e, int f)
{
    return max(max_5(a,b,c,d,e), f);
}

int main()
{
    cout << "Enter 6 numbers: ";
    int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    cout << max_6(a,b,c,d,e,f) << endl;
    return 0;
}