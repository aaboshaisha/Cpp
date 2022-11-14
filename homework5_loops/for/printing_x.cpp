#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N ; i++)
    {
        int j = N - i - 1;
        for (int pos = 0; pos < N; pos++)
        {
            if (pos == i || pos ==j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}