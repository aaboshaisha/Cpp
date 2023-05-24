#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int prime_arr[100][100];

    int N, M, Q, i, j, r , c;
    // Read 2 integers N and M
    cout << "Enter 2 integers N & M: ";
    cin >> N >> M;
    // Read matrix N x M
    cout << "Enter values for matrix N x M: ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            int num = arr[i][j];
            bool is_prime = true;
                
            if (num == 0 || num == 1) // 0 & 1 are not primes
            {
                is_prime = false;
                prime_arr[i][j] = 0;
            }

            for (int k = 2; k <= num/2; k++)
            {
                if (num % k == 0)
                {
                    is_prime = false;
                    prime_arr[i][j] = 0;
                    break;
                }
            }
            if(is_prime)
                prime_arr[i][j] = 1;
        }
    }

    // Read Q for queries
    cout << "Enter number of queries Q: ";
    cin >> Q;
    // For each query
    for (int q = 0; q < Q; q++)
    {   
        int num_primes = 0;
        // Read 4 integers i, j , r, c
        cout << "Enter i, j, r, c for your query: ";
        cin >> i >> j >> r >> c;
        // check for primes within the submatrix given by the 4 numbers
        for (int row = i; row < i+r; row++)
        {
            for(int col = j; col < j+c; col++)
            { 
                num_primes += prime_arr[row][col];  
            }
        }
        cout << num_primes << endl;
    }
    return 0;
}