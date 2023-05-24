#include <iostream>
using namespace std;


template <typename T>
struct Deque{
    T arr[100];
    int pos;

    // Constructor
    Deque(){
        pos = 0;
    }

    // how many elements
    int size(){
        return pos;
    }

    // is it empty
    bool empty(){
        if(pos == 0)
            return true;
        else
            return false;
    }

    // Add front
    void push_front(T value){
        // shift everything to the right
        for(int i = pos-1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = value;
        ++pos;
    }

    // Add back
    void push_back(T value){
        arr[pos++] = value;
    }

    // Get front
    T front(){
        return arr[0];
    }

    // get back
    T back(){
        return arr[pos-1];
    }

    //remove front
    T pop_front(){
        T removed = arr[0];
        // shift everything to the left
        for(int i = 1; i < pos; i++)
        {
            arr[i-1] = arr[i];
        }
        --pos;
        return removed;
    }

    // remove back
    T pop_back(){
        T removed;
        if(pos != 0)
        {
            removed = arr[pos-1]; 
            arr[pos-1] = 0;
            --pos;
        }
        return removed;
    }


    void print(){
        for(int i = 0; i < pos; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};



int main()
{
    Deque<int> q;
    q.push_back(20);	// q: 20
    q.print();
	q.push_back(30);	// q: 20 30
    q.print();
	q.push_back(40);	// q: 20 30 40
    q.print();
	q.push_front(10);	// q: 10 20 30 40
    q.print();
	q.push_back(50);	// q: 10 20 30 40 50
    q.print();
	q.push_front(0);	// q: 0 10 20 30 40 50    return 0;
    q.print();

    cout << q.pop_back() << endl;
    q.print();
    cout << q.pop_front() << endl;
    q.print();
    cout << q.pop_back() << endl;
    q.print();
    cout << q.pop_front() << endl;
    q.print();

    return 0;
}