#include <iostream>
using namespace std;

int main()
{
    string name1, name2;
    string id1, id2;
    float grade1, grade2; 

    // prompt user for student 1's name, id and math grade
    cout << "What is student 1's name: ";
    cin >> name1;

    cout << "Their id: ";
    cin >> id1;

    cout << "Their math exam grade: ";
    cin >> grade1;

    cout << "What is student 2's name: ";
    cin >> name2;

    cout << "Their id: ";
    cin >> id2;

    cout << "Their math exam grade: ";
    cin >> grade2;

    cout << "\nStudent grades in math\n"
    << name1 << " (with id " << id1 << ")" << " got grade: " << grade1 << "\n"
    << name2 << " (with id " << id2 << ")" << " got grade: " << grade2 << "\n"
    << "Average grade is " << (grade1 + grade2) / 2.0 << "\n"; 

    return 0;
}