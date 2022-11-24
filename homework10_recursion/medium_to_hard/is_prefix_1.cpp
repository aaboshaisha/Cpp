#include <iostream>
using namespace std;

bool is_prefix(string main, string prefix, int start = 0)
{
    //3. When to stop? (Also checks each new start position)
    if(start == prefix.size())
        return true;
    //2. How to check it?
    if(main[start] != prefix[start])
        return false;
    
    //1. check the next position
    return is_prefix(main, prefix, start+1);
}

int main()
{
    cout << is_prefix("abcdefgh", "abc") << endl;
    cout << is_prefix("abcdefgh", "abd") << endl;
    cout << is_prefix("abcdefgh", "a") << endl; 
    return 0;
}