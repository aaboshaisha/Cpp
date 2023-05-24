#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    // Read integers N, M 
    int N, M;
    cout << "Enter integers N, M representing matrix: ";
    cin >> N >> M;
    // initial robot position
    int row_pos = 0, col_pos = 0;
    // Directions encoding
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};

    // Read int K
    int K; 
    cout << "Enter number of commands K: ";
    cin >> K;
    for(int k = 0; k < K; k++)
    {
        // each command has 2 values
        int direction, num_steps;
        // Read number of steps and direction for each command
        cout << "Enter number of steps and direction of robot: ";
        cin >> direction >> num_steps;
        // change direction encoding to use it to access di and dj arrays
        --direction;

        row_pos = (row_pos + num_steps * di[direction]) % N;
        col_pos = (col_pos + num_steps * dj[direction]) % M;

        
        if (row_pos < 0)
            row_pos = row_pos + N;
        
        
        if (col_pos < 0)
            col_pos = col_pos + M;
        
        cout << row_pos << " " << col_pos << endl;
    }

    return 0;
}