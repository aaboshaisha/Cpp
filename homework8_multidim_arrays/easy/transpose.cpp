#include <iostream>
using namespace std;

int main()
{   
    const int K = 100;
    int arr[K][K];
    int N, M;
    cout << "Enter integers N , M: ";
    cin >> N >> M;
    cout << "Enter values for array N x M to transpose: ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[j][i];
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}