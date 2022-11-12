#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number of days: ";
    cin >> n;
    int years = n / 360;
    int days_for_months = n % 360;
    int months = days_for_months / 30; 
    int days = days_for_months % 30;
    
    cout << years << " " << months << " " << days << "\n";
    return 0;
}