#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    //prompt user for input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    bool is_even_a = (a%2 == 0);
    bool is_even_b = (b%2 == 0);

    if (!is_even_a && !is_even_b)
        cout << a * b << "\n";
    else if (is_even_a && is_even_b)
        cout << a / b << "\n";
    else if (!is_even_a && is_even_b)
        cout << a + b << "\n";
    else if (is_even_a && !is_even_b)
        cout << a - b << "\n";

    return 0;
}