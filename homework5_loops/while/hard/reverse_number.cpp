#include <iostream>
using namespace std;

int main()
{
    int N = 0, len = 0;
    // get its length
    cin >> N;
    int tmp_N = N;
    if (tmp_N == 0)
    {
        len = 1;
    }
    else
    {
        while (tmp_N != 0)
        {
            len +=1;
            tmp_N /= 10;
        }
    }

    int r = 0, d = 0;
    // get the digits and combine into a new number
    while (N != 0)
    {
        // get the last digit
        d = N % 10;
        // reduce the number
        N /= 10;
        int power = 1;
        int i = len;
        while (i != 1)
        {
            power = power * 10;
            i --;   
        }
        len --;
        // build the new reverse
        r += (d * power);
    }
    cout << r << " " << r*3 << "\n";
    return 0;
}