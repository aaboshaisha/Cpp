#include <iostream>
using namespace std;

struct patient
{
    string name;
    int status;

    patient()
    {
        name = "empty";
        status = 0;
    }
};

struct queue
{
    patient arr[5];
    int len;

    // call constructor
    queue(){
        len = 0;
    }
    
    

    void add_end(patient value)
    {
        if(len < 5)
        {
            arr[len] = value;
            len++;
        }
        else
        {
            cout << "Queue full. Remove elements first before any new can be added\n";
        }
        return;
    }

    void add_front(patient value)
    {
        if(len >= 5)
        {
            cout << "Queue full. Remove elements first before any new can be added\n";
        }
        else
        {
            // shift everything to the right
            for(int i = len-1; i >= 0; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[0] = value;
            len++;
        }
        return;
    }

    patient remove_front()
    {
        patient removed = arr[0];
        for(int i = 1; i < len; i++)
        {
            arr[i-1] = arr[i];
        }
        len--;
        return removed;
    }

    void print()
    {
        for(int i = 0; i < len; i++)
            cout << arr[i].name << " ";
        cout << endl;
    }

};


// Global declaration of patient database
queue patient_arr[20];

void add_patient()
{
    cout << "Enter speciality, name and status: ";
    int speciality;
    patient p;
    cin >> speciality >> p.name >> p.status;
    if(!(1 <= speciality && speciality <= 20))
    {
        cout << "Speciality can only be between 1 and 20.\n";
        return;
    }

    if(!(0 <= p.status && p.status <= 1))
    {
        cout << "Status can only be 0 or 1\n";
        return;
    }

    if(p.status == 0)
            patient_arr[speciality].add_end(p);

    else if(p.status == 1)
        patient_arr[speciality].add_front(p);

}

void print_all_patients()
{
    for(int i = 0; i < 20; i++)
    {
        if(patient_arr[i].len > 0)
        {
            cout << "Speciality number "<< i << " has " << patient_arr[i].len << " patients: ";
            patient_arr[i].print();
            cout << endl;
        }
    }
}

void get_next_patient()
{
    cout << "Enter speciality: ";
    int speciality;
    cin >> speciality;

    if(patient_arr[speciality].len == 0)
    {
        cout << "No patients. Have a rest Dr\n";
        return;
    }
    patient next = patient_arr[speciality].remove_front();
    cout << next.name << " please go with the Dr" << endl;
    return;
}

int get_choice()
{
    int choice = -1;
    while(choice == -1)
    {
        cout << "Enter your choice:" << endl;
        cout << "1) Add new patient" << endl;
        cout << "2) Print all patients" << endl;
        cout << "3) Get next patient" << endl;
        cout << "4)Exit" << endl;

        cin >> choice;
        if(!(1 <= choice && choice <= 4))
        {
            cout << "Invalid chocie. Try again\n";
            choice = -1;
        }
    }
    return choice;
    
}

void menu()
{
    while(true)
    {
        int choice = get_choice();
        if(choice == 1)
            {add_patient();
            }
        else if(choice == 2)
            print_all_patients();
        else if(choice == 3)
            get_next_patient();
        else
            return;
    }
    
}

int main()
{
    menu();
    return 0;
}