#include <iostream>
using namespace std;

bool is_prime(int num)
{
    bool prime = true;
    if(num == 0 || num == 1)
    {
        prime = false;
    }
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
            prime = false;
    }
    return prime;
}


int nth_prime(int n)
{
    int i = 0;
    while(n)
    {
        if(is_prime(i))
        {
            n--;
        }
        i++;
    }
    return i-1;
}


int main()
{
    int n;
    cin >> n;
    cout << nth_prime(n) << endl;
    return 0;
}