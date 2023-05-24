// Implementing a queue for different data types using a template
#include <iostream>
using namespace std;

template <typename T>
struct Queue{
    // We'll provide a generic queue with 100 positions
    T arr[100];
    int pos;

    /*
    Remeber: a Queue is FIFO: First In, First Out
    Needs to support:
    - add (to current position)
    - remove (from 1st position)
    - Empty (to know if empty)
    */

   // Call consturctor with defaults
   Queue(){
    pos = 0;
   }
   
   bool empty(){
    if(pos == 0)
        return 1;
    else
        return 0;
   }
   void add(T value){
    // add to available position and increment
    arr[pos++] = value;
   }
   
   T remove(){
    // remove from first position and return removed value
    T removed = arr[0];
    for(int i = 1; i < pos; i++){
        arr[i-1] = arr[i];
    }
    pos--;
   }

   void print(){
    for(int i = 0; i < pos; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
   }
   

};









int main(){

    Queue <int> q_int;
    for(int i = 0; i < 5; i++){
        q_int.add(i);
    }
    q_int.print();
    
    q_int.remove();
    q_int.print();


    // Another Queue
    Queue <char> q_char;
    q_char.add('a');  
    q_char.add('b');  
    q_char.add('c');  
    q_char.add('d');  
    q_char.add('e');

    q_char.print();  


    return 0;
}