#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int N, M, r1, r2;
    cout << "Enter array size N x M: ";
    // get user input for N, M
    cin >> N >> M;
    cout << "Now enter values for the array: ";
    // Populate the array using user input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    // get the queries of rows and columns
    cout << "Enter which rows r1, r2 you would like to compare: ";
    cin >> r1 >> r2;

    // loop through all columns and compare both rows
    for (int col = 0; col < M; col++)
    {
        if(arr[r1-1][col] >= arr[r2-1][col])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}