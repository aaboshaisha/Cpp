#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 0, sum = 0, digit = 0;
    cin >> n >> a >> b;

    for (int num = 1; num <=n; num++)
    {   
        // get its digits and their sum
        int j = num, digit_sum = 0;
        while (j != 0)
        {
            digit = j % 10;
            j /= 10;
            digit_sum += digit;
        }
        if (digit_sum >= a && digit_sum <= b)
        {
            sum += num;
        }
    } 
    cout << sum << "\n";
    return 0;
}