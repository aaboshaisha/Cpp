#include <iostream>
using namespace std;

int main()
{
    // Read 3 numbers DEPTH, ROWS, COLS
    int DEPTH, ROWS, COLS;
    cin >> DEPTH >> ROWS >> COLS;
    /*
    Read 1 int
    1 -> 3D -> 1D
    2 -> 1D -> 3D
    */
   int input;
   cin >> input;
    /*
    If input was 1, then read 3 integers d, r, c then convert to position in 1D array
    If input was 2, then read 1 integer position, then convert to 3D array position
    */
   if(input == 1)
   {
    int d, r, c;
    cin >> d >> r >> c;
    cout << (d*(ROWS*COLS) + (r*COLS) + c) << endl;
   }

   else if(input == 2)
   {
    int idx;
    cin >> idx;
    int i = idx / (ROWS*COLS);
    int remainder = idx %(ROWS*COLS);
    int j = remainder / ROWS;
    int k = remainder % ROWS;
    cout << i << " " << j << " " << k << endl; 
   }

   else
   {
    cout << "Invalid conversion code.\n";
    return 0;
   }

    return 0;
}