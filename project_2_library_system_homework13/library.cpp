#include <iostream>
using namespace std;


struct user
{
    int id;
    string name;
};

struct users
{
    user users_list[100];

    void add_user()
    {
        return;
    }

    void borrow_book()
    {
        return;
    }

    void return_book()
    {
        return;
    }

    void print()
    {
        return;
    }

} users_database;


struct book
{
    int id, quantity;
    string name;
    string borrowed_by[10];
};

struct books_books_database
{
    book books_list[100];

    void add_book()
    {
        return;
    }

    void search()
    {
        return;
    }

    void list_books()
    {
        return;
    }

    void list_users()
    {
        return;
    }

    void list_borrowed()
    {
        return;
    }
} books_database;


int display_and_get_choices()
{
    int choice = -1;
    while(choice == -1)
    {
        cout << "1) Add book\n";   
        cout << "2) Search books by prefix\n";   
        cout << "3) Print names of users who borrowed a book\n";   
        cout << "4) Print all books by id\n";   
        cout << "5) Print all books by name\n";   
        cout << "6) Add user\n";   
        cout << "7) Borrow a book\n";   
        cout << "8) Return a book\n";   
        cout << "9) Print all users\n";   
        cout << "10) Exit\n";

        cin >> choice;

        if(!(1 <= choice && choice <= 10))
        {
            cout << "Invalid choice! Try again\n";
            choice = -1;
        }
    }
    return choice;
}



void menu()
{
    while(true)
    {
        int choice = display_and_get_choices();

        if(choice == 1)
            books_database.add_book();
        else if(choice == 2)
            books_database.search();
        else if(choice == 3)
            books_database.list_borrowed();
        else if(choice == 4)
            books_database.list_books();
        else if(choice == 5)
            books_database.list_books();
        else if(choice == 6)
            users_database.add_user();
        else if(choice == 7)
            users_database.borrow_book();
        else if(choice == 8)
            users_database.return_book();
        else if(choice == 9)
            users_database.print();
        else
            return;
    }
}




int main()
{
    
    return 0;
}