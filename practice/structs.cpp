#include <iostream>
using namespace std;

struct Cat{
    string name;
    bool mood; // 1 is happy, 0 is sad

    void speak(){
        if(mood == 1)
            cout << "Meoow\n";
        else
            cout << "Grrrrr\n";
    }
};


struct Dog{
    string name;
    bool mood;

    // initialize default values with Constructor method
    Dog(){
        name = "empty";
        mood = 0;
    }
};

struct Wolf{
    string name;
    bool mood;

    Wolf(){
        name = "wolverine";
        mood = 0;
    }

    // We can have an option to pass parameters in constructor
    Wolf(string name, bool mood){
        this -> name = name;
        this -> mood = mood;
    }
};


struct Human{
    string name;
    int age;

    Human(){
        name = "empty";
        age = 0;
    }
};

int main()
{
    Cat baskota;
    baskota.mood = 0;
    baskota.speak();

    Dog x;
    cout << x.name << endl;
    cout << x.mood << endl;

    Dog lucky;
    lucky.name = "Lucky";
    lucky.mood = 1;

    cout << lucky.name << " " << lucky.mood << endl;

    Wolf striker("Striker", 0);
    cout << striker.name << " " << striker.mood << endl;

    Human h1;
    cout << h1.name << " " << h1.age << endl;
    return 0;
}