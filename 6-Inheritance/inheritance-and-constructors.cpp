#include<iostream>

using namespace std;

class Parent2 {
public :
    int a;

    Parent2() {
        a = 0;
        cout << "Inside default parent constructor" << endl;
    }

    Parent2(int val) {
        a = val;
        cout << "Inside parameterized parent constructor" << endl;
    }
};

class Child2 : public Parent2 {
public :
    int b;

    Child2() {
        b = 0;
        cout << "Inside default child constructor" << endl;
    }

    Child2(int val1, int val2) : Parent2(val2) {
        b = val1;
        cout << "Inside parameterized child constructor" << endl;
    }

    void display() {
        cout << "\na -> " << a << "\nb -> " << b;
    }
};

int inheritance_and_constructors_main() {
    Child2 christopher(69, 70);
    christopher.display();
    return 0;

}
