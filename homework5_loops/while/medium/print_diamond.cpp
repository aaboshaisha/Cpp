#include <iostream>
using namespace std;

int main()
{
    int i = 1, N = 0;
    // User input
    cout << "Enter an integer N: ";
    cin >> N;

    int j = 0;
    int end_stars = 0;
    while (i <= N)
    {   
        int stars = i + j, spaces = N -i;
        while (spaces > 0)
        {
            cout << " ";
            spaces --; 
        }
        while (stars > 0)
        {
            cout << "*";
            stars --;
        }
        end_stars = i + j;
        i ++;
        j++;
        cout <<"\n";
    }
    j = 0;
    while (N > 0)
    {
        N--;
        int stars = end_stars;
        int spaces = j;
        while (spaces > 0)
        {
            cout << " ";
            spaces--;
        }
        while (stars > 0)
        {
            cout << "*";
            stars --;
        }
        j ++;
        end_stars -= 2;
        cout << "\n";
    }


    
    
    return 0;
}