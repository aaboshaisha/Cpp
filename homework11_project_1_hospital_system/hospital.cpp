#include <iostream>
using namespace std;

// Initialize patient database
// 20 specializations X 5 slots X 2 entries (name and status)
string patients_arr[20][5][2];

int menu()
{
    cout << "Enter your choice:" << endl;
    cout << "1) Add new patient" << endl;
    cout << "2) Print all patients" << endl;
    cout << "3) Get next patient" << endl;
    cout << "4)Exit" << endl;
    int choice;
    cin >> choice;
    return choice;
}

void add_new()
{
    cout << "Enter specialization, name, status: ";
    int speciality;
    string name, status;
    cin >> speciality >> name >> status;

    // check valid specialization
    if(!(1 <= speciality && speciality <= 20))
    {
        cout << "The speciality you asked for does not exist\n";
        return;
    }

    // check if it has an empty slot
    int empty_slot;

    for(int j = 0; j < 5; j++)
    {
        if (patients_arr[speciality][j][0] == "empty")
        {
            cout << "Empty slot num: " << j << endl;
            empty_slot = j;
            break;
        }
        else
        {
            cout << "Sorry, we can't add more patients to this speciality\n";
            return;
        }
    }

    return;
}

void print_all()
{
    cout << "Printing all patients\n";
    return;
}

void get_next()
{
    cout << "Getting next patient\n";
    return;
}


/*---------------------------------------*/
int main()
{

    for(int i = 0; i < 20; i++)
    for(int j = 0; j < 5; j++)
        for(int k = 0; k < 2; k++)
            patients_arr[i][j][k] = "empty";

    // Keep running forever
    while(true)
    {
        // Display menu to user and get user choice
        int choice = menu();

        // Select functionality based on user chocie
        if(choice == 1)
        {
            add_new();
        }
        else if(choice == 2)
        {
            print_all();
        }
        else if(choice ==3)
        {
            get_next();
        }
        else if(choice == 4)
        {
            //Exit
            return 0;
        }
        else
        {
            cout << "Invalid chocie. Try again\n";
            continue;
        }
    }
    return 0;
}