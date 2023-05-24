#include <iostream>
using namespace std;

bool is_palindrome(int arr[], int len, int start = 0)
{
    if(start >= len-1)
        return true;

    // compare start and end
    if(arr[start] != arr[len-1])
        return false;
    // shift the start and end by one position and compare
    return is_palindrome(arr, len-1, start+1);
}

int main()
{
    int arr[] = {1,2,3,2,1};
    cout << is_palindrome(arr, 5) << endl;
    int arr1[] = {1,2,3,4};
    cout << is_palindrome(arr1,4) << endl;
    return 0;
}