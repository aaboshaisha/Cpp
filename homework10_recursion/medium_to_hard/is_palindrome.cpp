#include <iostream>
using namespace std;

bool is_palindrome(int arr[], int len, int start = 0)
{
    if(start >= len-1)
        return true;
    bool p = is_palindrome(arr, len-1, start+1);
    return p * (arr[start] == arr[len-1]);
}

int main()
{
    int arr[] = {1,2,3,2,1};
    cout << is_palindrome(arr, 5) << endl;
    int arr1[] = {1,2,3,4};
    cout << is_palindrome(arr1,4) << endl;
    return 0;
}