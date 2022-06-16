#include<iostream>

using namespace std;

class Parent {
public:
    int a;
    int b;

    Parent() {
        a = 0, b = 0;
    }

    virtual void output() {
        cout << "In Parent Class" << endl;
    }
};

class Child : public Parent {
public :
    int c;
    int d;

    Child() {
        c = d = 0;
    }

    void output() {
        cout << "In Child Class" << endl;
    }

    void printValues() {
        cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
    }
};

int main() {
    Parent *b;
    Child d;
    b = &d;
    b->output();
    return 0;

}
