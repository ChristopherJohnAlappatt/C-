#include<iostream>

using namespace std;

class Parent {
public:
    int a;
    int b;

    Parent() {
        cout << "Class Parent created !!" << endl;
        a = 0, b = 0;
    }

    void setValues(int x, int y) {
        a = x, b = y;
        cout << "In Parent Class" << endl;
    }
};

class Child : public Parent {
public :
    int c;
    int d;

    Child() {
        cout << "Class B created !!" << endl;
        c = d = 0;
    }

    void setValues(int x, int y) {
        c = x, d = y;
        cout << "In Child Class" << endl;
    }

    void printValues() {
        cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
    }
};

int main() {
    Child *pointer;
    Child child;
    pointer = &child;
    pointer->setValues(3, 3);
    pointer->printValues();
    child.setValues(2, 1);
    child.printValues();
    return 0;

}
