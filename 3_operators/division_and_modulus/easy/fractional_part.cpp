#include <iostream> 
using namespace std;

int main()
{
    int a, b = 0;
    // Prompt user for input
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Fractioanl part after division: " << ((double) (a % b) / b) << "\n";
    return 0;
}