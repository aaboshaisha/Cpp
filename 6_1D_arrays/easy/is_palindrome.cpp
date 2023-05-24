#include <iostream>
using namespace std;

int main()
{
    int arr[1000] = {0};
    int n = 0;
    string palindrome = "YES";

    cin >> n; 
    // populate the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // check if Plaindrome
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i] == arr[n-i-1])
        {
            continue;
        }
        else
        {
            palindrome = "NO";
            break;
        }
    }
    cout << palindrome << "\n";
    return 0;
}