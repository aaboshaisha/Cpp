#include <iostream>
#include <algorithm>
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

// Functions to compare books based on name and id
bool compare_name(book a, book b)
{
    if(a.name < b.name)
        return 1;
    else
        return 0;
}

bool compare_id(book a, book b)
{
    if(a.id < b.id)
        return 1;
    else
        return 0;
}

bool is_prefix(string input, string prefix)
{
    if(prefix.size() > input.size())
        return 0;
    
    for(int i = 0; i < prefix.size(); i++)
    {
        if(prefix[i] != input[i])
            return 0;
    }
    return 1;
}

struct shelf
{
    book books_list[100];
    int len;

    void add_book()
    {
        cout << "Enter book info: id, name and total quantity: ";
        book new_book;
        cin >> new_book.id >> new_book.name >> new_book.quantity;
        books_list[len] = new_book;
        cout << "Added book: " << books_list[len].name << endl;
        len++;
        return;
    }

    void search()
    {
        string prefix;
        cout << "Enter book's name / prefix: ";
        cin >> prefix;

        for(int i = 0; i < len; i++)
        {
            if(is_prefix(books_list[i].name, prefix))
                cout << books_list[i].name << endl;
        }
        return;
    }

    void list_books(int c)
    {
        if(c == 0)   
            sort(books_list, books_list + len, compare_name);
        else if (c == 1)
            sort(books_list, books_list + len, compare_id);
        
        for (int i = 0; i < len; i++)
            cout << "id: " << books_list[i].id << " name: " << books_list[i].name << " quantity: " << books_list[i].quantity << endl;
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
        int c;

        if(choice == 1)
            books_database.add_book();
        else if(choice == 2)
            books_database.search();
        else if(choice == 3)
            books_database.list_borrowed();
        else if(choice == 4)
            books_database.list_books(c=1);
        else if(choice == 5)
            books_database.list_books(c=0);
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
    menu();    
    return 0;
}