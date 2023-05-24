#include <iostream>
using namespace std;


double add(double x,double y)
{
    return (x+y);
}

double sub(double x,double y)
{
    return (x-y);
}

double mult(double x, double y)
{
    return (x*y);
}

double div(double x, double y)
{
    if (y == 0)
    {
        cout << "Zero division error.\n";
        return 0;
    }
    return (x/y);
}

int valid_range(double x)
{
    if (x < 1 || x > 5)
    {
        cout << "Number must be from 1 to 5\n";
        return 0;
    }
    else
    {
        return 1;
    }
}

void read_user_input(double &a, double &b)
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

int menu()
{
    while(true)
    {
        cout << "Select operation to perform: \n";
        cout << "1) Add\n";
        cout << "2) Subtract\n";
        cout << "3) Multiply\n";
        cout << "4) Divide\n";
        cout << "5) End the program\n";
        
        int c;
        cin >> c;

        if(!(1<= c && c <= 5))
        {
            cout << "Invalid chocie. Try again\n";
            cout << "**************************\n";
        }
        else
            return c;
    }
    
}

int main()
{
    double a, b, out;
    int c;
    c = menu();
    
    read_user_input(a,b);

    if(c == 1)
    {
        out = add(a,b);
    }
    else if (c == 2)
    {
        out = sub(a,b);
    }
    else if ( c == 3)
    {
       out = mult(a,b);
    }
    else if (c == 4)
    {
        out = div(a,b);
    }
    cout << out << endl;
    return 0;
}