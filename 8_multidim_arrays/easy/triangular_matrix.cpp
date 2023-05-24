#include <iostream>
using namespace std;

int main()
{
    int N, upper_sum = 0, lower_sum = 0;
    // get user input
    cout << "Enter an integer N: ";
    cin >> N;
    int x;
    // Populate the array
    cout << "Enter values for an N x N matrix: ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            if (i <= j)
                upper_sum += x;
            if (i >= j)
                lower_sum += x;
        }
    }
    cout << lower_sum << endl;
    cout << upper_sum << endl;

    return 0;
}