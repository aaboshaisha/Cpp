#include <iostream>
using namespace std;


bool starts_with(string input, string pattern, int pos)
{
    // get the end position for searching
    int end = pos + pattern.size();

    for(int i = pos, j = 0; i < end; i++, j++)
    {
        if (input[i] != pattern[j])
        {
            return false;
        }
    }
    return true;
}


string replace_str(string input, string pattern, string to)
{
    string out;
    for(int i = 0; i < input.size(); i++)
    {
        if(starts_with(input,pattern,i))
        {
            out += to;
            i = i+pattern.size()-1;
        }
        else
        {
            out += input[i];
        }
    }
    
    return out;

}




int main()
{
    // Get user input
    cout << "Enter input, pattern, change to: ";
    string input, pattern, to;
    cin >> input >> pattern >> to;


    cout << replace_str("aabcabaaad", "aa","x") << endl;
    return 0;
}