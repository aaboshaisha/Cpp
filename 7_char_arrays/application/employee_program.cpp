#include <iostream>
using namespace std;

int main()
{   
    // Initialize our database of 4 arrays for 1000 employees
    const int N = 1000;
    string name_arr[N], age_arr[N], salary_arr[N], gender_arr[N];

    // initialize variables to take user input
    string input;
    int choice, record_idx = 0;

    // Program runs forever
    while(true)
    {
        // present 4 choices to user
        cout << "Enter your choice:" << endl;
        cout << "1) Add new employee" << endl;
        cout << "2) Print all employees" << endl;
        cout << "3) Delete by age" << endl;
        cout << "4) Update salary by name " << endl;

        cin >> choice;

        // guard against wrong input
        if (choice < 1 || choice > 4)
        {
            cout << "Invalid Chocie. Try again" << endl;
            continue;
        }

        if (choice == 1)
        {
            // prompt user for input
            cout << "Enter name: ";
            cin >> name_arr[record_idx];
            cout << "Enter age: ";
            cin >> age_arr[record_idx];
            cout << "Enter salary: ";
            cin >> salary_arr[record_idx];
            cout << "Enter gender: ";
            cin >> gender_arr[record_idx];
            cout << endl;
            
            // increment record idx after employee added
            record_idx++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i <= record_idx; i++)
            {
                if (name_arr[i] != "?")
                    cout << name_arr[i] << " " << age_arr[i] << " " << salary_arr[i] << " " << gender_arr[i] <<endl;
            }
        }
        else if (choice == 3)
        {
            string start_age, end_age;
            cout << "Enter start and end age ";
            cin >> start_age >> end_age;

            // Loop through ages and find idx
            for (int i = 0; i <= record_idx; i++)
            {
                if(age_arr[i] >= start_age && age_arr[i] <= end_age)
                {
                    name_arr[i] = age_arr[i] = salary_arr[i] = gender_arr[i] = "?";
                }
            }
        }
        else if (choice == 4)
        {
            // get usr input
            string name, salary;
            bool found = false;
            cout << "Enter name and new salary: ";
            cin >> name >> salary;

            for(int i = 0; i <= record_idx; i++)
            {
                if (name_arr[i] == name)
                {
                    found = true;
                    salary_arr[i] = salary;
                    cout << name_arr[i] << " " << age_arr[i] << " " << salary_arr[i] << " " << gender_arr[i] <<endl;
                    break;
                }
            }
            if (!found)
                cout << "No employee with that name\n\n";

        }

        

    }
    return 0;
}