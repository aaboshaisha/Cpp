#include <iostream>
using namespace std;

bool is_palindrome(int arr[], int len)
{
    bool palindrome = true;
    
    for(int i = 0; i < (len/2); i++)
    {
        if(arr[i] != arr[len-1-i])
            palindrome = false;
    }
    return palindrome;
}

int main()
{
    int N;
    cin >> N;
    int arr[100];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << is_palindrome(arr, N) << endl;
    return 0;
}