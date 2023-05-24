#include <iostream>
using namespace std;

/*
This code can be modified whereas instead of counting everytime the length func is called from 
above using count++, we could modify the return statements in the recursive calls to be

            return 1 + length_3n_plus_1(n/2);
        
            return 1 + length_3n_plus_1(3*n+1); 
and this means we're adding 1 whatever length of the sequence that preceeded us.
*/


int length_3n_plus_1(int n)
{
    static int count = 0;
    ++ count;
    
    if(n == 1)
    {
        cout << count << endl;
        return n;
    }
    else
    {
        if(n % 2 == 0)
            return length_3n_plus_1(n/2);
        else
            return length_3n_plus_1(3*n+1); 
    }
    return count; 
}



int main()
{
    int n;
    cin >> n;
    length_3n_plus_1(n);
    return 0;
}