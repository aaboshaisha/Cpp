#include <iostream>
using namespace std;

int main()
{
    int odd_count = 0, even_count = 0, i = 0, n = 0; 
    float odd_sum = 0.0, even_sum = 0.0, x = 0.0;
    // user input
    cout << "Enter an integer N, followed by N numbers: ";
    cin >> n;
    while (i < n)
    {
        i++;
        cin >> x;
        if (i % 2 == 0) //we have an  even position
        {
            even_sum += x;
            even_count++;
        }
        else // we have an odd position
        {
            odd_sum += x;
            odd_count++;
        }
    }
    float odd_average = odd_sum / odd_count;
    float even_average = even_sum / even_count;

    cout << odd_average << " " << even_average << "\n";
    return 0;
}