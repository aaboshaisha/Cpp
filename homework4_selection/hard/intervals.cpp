#include <iostream>
using namespace std;

int main()
{
    int X, s1, e1, s2, e2, s3, e3, count = 0;
    // User input
    cout << "Enter a number X followed by 6 numbers s1,e1,s2,e2,s3,e3 where s < e: ";
    cin >> X >> s1 >> e1 >> s2 >> e2 >> s3 >> e3; 
    
    if (X >= s1 && X <= e1) { count +=1;} 
    if (X >= s2 && X <= e2) { count +=1;} 
    if (X >= s3 && X <= e3) { count +=1;} 
    cout << count << "\n";

    return 0;
}