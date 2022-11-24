#include <iostream>
using namespace std;

bool is_prefix(string main, string prefix, int start = 0)
{
    if(start == prefix.size() - 1)
        return (main[start] == prefix[start]);
    bool p = is_prefix(main, prefix, start+1);
    return p*(main[start] == prefix[start]);
}


int main()
{
    cout << is_prefix("abcdefgh", "abc") << endl;
    cout << is_prefix("abcdefgh", "abd") << endl;
    cout << is_prefix("abcdefgh", "a") << endl;
    return 0;
}