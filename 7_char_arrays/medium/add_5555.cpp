#include <iostream>
using namespace std;

int main()
{
    string num;
    int carry = 0;
    cin >> num;

    for (int i = 0; i < num.size(); i++)
    {
        int sum = 0, d2;
        int d1 = (num[num.size() - i - 1] - '0');
        
        if(i < 4)
            d2 = 5;
        else
            d2 = 0;

        sum = d1 + d2 + carry;
        
        if(sum >= 10)
        {
            num[num.size() - i - 1] = (sum - 10) + '0';
            carry = 1;
        }
            
        else
        {
            num[num.size() - i - 1] = sum + '0';
            carry = 0;
        }
    }
    if(carry)
        cout << '1';
    cout << num <<"\n";

    

    return 0;
}