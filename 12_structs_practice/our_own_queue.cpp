#include <iostream>
using namespace std;

struct queue
{
    int arr[100];
    int len;

    // call constructor
    queue(){
        len = 0;
    }
    

    void add_end(int value)
    {
        if(len < 100)
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

    void add_front(int value)
    {
        if(len >= 100)
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

    int remove_front()
    {
        int removed = arr[0];
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
            cout << arr[i] << " ";
        cout << endl;
    }

};

int main()
{
    queue my_queue;

    my_queue.add_end(10);
    my_queue.add_end(20);
    my_queue.add_end(30);
    my_queue.print();

    my_queue.add_front(1);
    my_queue.add_front(4);
    my_queue.print();

    cout << my_queue.remove_front() << endl;


    return 0;
}