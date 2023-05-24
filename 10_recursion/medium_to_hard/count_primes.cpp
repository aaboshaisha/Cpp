#include <iostream>
using namespace std;

bool is_prime(int n, int k = 2)
{
    // 0 and 1 are not primes
    if(0 <= n && n < 2)
        return false;
    
    if(k == n)
        return true;
    bool p = !(n % k == 0);
    return p * is_prime(n, k+1);
}

int count_primes(int start, int end)
{
    if(start == end)
        return is_prime(start);
    return is_prime(start) + count_primes(start+1, end);
}

int main()
{
    cout << "0 is: " << is_prime(0) << endl;
    cout << "1 is: " << is_prime(1) << endl;
    cout << "2 is: " << is_prime(2) << endl;
    cout << "3 is: " << is_prime(3) << endl;
    cout << "4 is: " << is_prime(4) << endl;
    cout << "6 is: " << is_prime(6) << endl;
    cout << "7 is: " << is_prime(7) << endl;

    cout << count_primes(10,20) << endl;
    cout << count_primes(10,200) << endl;
    cout << count_primes(10,20000) << endl;

    return 0;
}