#include <iostream>
using namespace std;

/*
A key to the solution here is converting the average to a sum then only averaging at the last step.

The function returns to us: (partial_avg + arr[len-1]) / len; ie: an average
At each step we divide by len = (len -1)
We can conver this to a sum by X by the current (len-1)

*/

double average(double arr[], int len)
{
    if (len == 1)
        return arr[0];

    double partial_avg = average(arr, len-1) * (len-1);
    return (partial_avg + arr[len-1]) / len;
}

int main()
{   
    /*
    double arr[100];
    int len;
    cin >> len;
    for(int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << average(arr, len) << endl;
    */
   double arr[] = {1, 2, 3};
   cout << average(arr, 3) << endl;
    return 0;
}