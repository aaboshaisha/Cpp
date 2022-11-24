#include <iostream>
using namespace std;

// Initialize patient database
// 20 specializations X 5 slots X 2 entries (name and status)
string patients_arr[20][5][2];
int count[20];

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
        if(j == 4 && patients_arr[speciality][j][0] != "empty")
        {
            cout << "Sorry, we can't add more patients to this speciality\n";
            return;
        }
        else if (patients_arr[speciality][j][0] == "empty")
        {
            cout << "Empty slot num: " << j << endl;
            empty_slot = j;
            break;
        }
    }
    

    // Now check if regular or urgent
    if(status == "0")
    {
        patients_arr[speciality][empty_slot][0] = name;
        patients_arr[speciality][empty_slot][1] = status;
    }
    else if(status == "1")
    {
        // if slot 0 is not empty,shift everyone else 1 position to empty first slot
        if(!(patients_arr[speciality][0][0] == "empty"))
        {
            for(int i = 3; i >= 0; i--)
            {
                patients_arr[speciality][i+1][0] = patients_arr[speciality][i][0];
                patients_arr[speciality][i+1][1] = patients_arr[speciality][i][1];
            }

        }
        // Place urgent patient in empty slot
        patients_arr[speciality][0][0] = name;
        patients_arr[speciality][0][1] = status; 
    }
}

string decode_status(string status)
{
    if(status == "0")
        return "Regular";
    else
        return "Urgent";
}

void print_all()
{
    for(int i = 0; i < 20; i++)
    {
        if(patients_arr[i][0][0] != "empty")
        {
            cout << "Patients in specialization " << i << " are:\n";
            for(int j = 0; j < 5; j++)
            {
                if(patients_arr[i][j][0] != "empty")
                {
                    string name = patients_arr[i][j][0];
                    string status = decode_status(patients_arr[i][j][1]);
                    cout << name << " " << status << endl;
                }
            }
        }
    }
    return;
}

void get_next()
{
    cout << "Enter speciality: ";
    int speciality;
    cin >> speciality;

    if(patients_arr[speciality][0][0] == "empty")
    {
        cout << "No patients at the moment. Have a rest Dr\n";
        return;
    }
    else
    {
        // get the name of the patient in slot 0
        string name = patients_arr[speciality][0][0];
        cout << name << " please go with the Dr\n";
        // shift everyone else to the left
        for(int j = 1; j < 5; j++)
        {
            patients_arr[speciality][j-1][0] = patients_arr[speciality][j][0];
            patients_arr[speciality][j-1][1] = patients_arr[speciality][j][1];
        }
        return; 
    }
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