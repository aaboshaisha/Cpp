#include <iostream>
using namespace std;

int main()
{
    int N = 0, i = 0, cnt = 0; 
    cout << "Enter an integer N (1 <= 30): ";
    cin >> N;
    while (cnt < N)
    {
        if (i % 3 == 0 && i % 4 != 0)
            {cout << i << " ";
            cnt++;}
        i++;
    }
    cout << "\n";
    return 0;
}