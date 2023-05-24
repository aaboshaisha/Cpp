#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0, idx = 0, taken_steps = 0, last_removed = 0;

    int arr[200] = {0};
    cin >> n >> k; 

    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }

    /*
    // For debuggin
    int arr[7] = {1,2,3,4,5,6,7};
    n = 7;
    k = 2;
    */
    

    int target_steps = k-1;
    int positions_visited = 0;

    // Go through all indices till they're all removed
    while (positions_visited < n)
    {
        while (taken_steps < target_steps)
        {
            // calculate where ur next step should be based on whether or not u're at last idx
            // if at last idx
            if (idx == n-1)
            {idx = idx + k - 1 - n;}
            // Otherwise move to next idx in order
            else
            {idx++;}

            // check if ur position now is empty or not
            //if at empty position, move to next but don't count that step
            if (arr[idx] == 0)
            {
                idx++;
            }
            else
            {
                // Otherwise, position is not empty. increment num steps taken
                taken_steps++;
            }
        }
        // now u should be at target
        last_removed = arr[idx];
        cout << last_removed << " ";
        // Kill this idx
        arr[idx] = 0;
        positions_visited ++;
        taken_steps = 0;
    }
    cout << "\n";
    
    return 0;
}