#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    // read ints N & M
    int N, M;
    cout << "Enter integers N & M ";
    cin >> N >> M;
    // read matrix N x M
    cout << "Enter values for matrix N x M: ";
    /*
    We start populating the array from row 1 and col 1 so that we have zero padding around.
    Having the zero padding makes it easier to check for mountains if we have only positive
    values in the matrix. Otherwise, we need to populate row1 and col1 with very small negative
    values.
    */
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
        }
    }

    // 8 positions to check
    int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            bool is_mountain = true;
            int num = arr[i][j];
            // check against each of the 8 positions
            for(int k = 0; k < 8; k++)
            {
                if(num <= arr[i+di[k]][j+dj[k]])
                {
                    is_mountain = false;
                    break;
                }
            }
        if(is_mountain)
            cout << (i-1) << " " << (j-1) << endl;
        }
    }   

    return 0;
}