#include <iostream>
using namespace std;

const int N = 1000;
int arr[N];

int fibonacci(int n)
{
    if(n == 0 | n == 1)
        return 1;
    else
    {
        if(arr[n])
        {
            return arr[n];
        }
            
        return arr[n] = fibonacci(n-2) + fibonacci(n-1);
    }
    
}

int main()
{
    for(int i = 0; i < N; i++)
    {
        arr[i] = 0;
    }

    arr[0] = arr[1] = 1;

    cout << fibonacci(10) << endl;
    cout << fibonacci(20) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    cout << fibonacci(50) << endl;
    return 0;
}