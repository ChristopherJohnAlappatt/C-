#include<iostream>

using namespace std;

class A {
public:
    int a = 0;

    A() {
        cout << "Class A created !!" << endl;
    }
};

class B : public A {
public :
    B() {
        cout << "Class B created !!" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Class C created !!" << endl;
        cout << a << endl;
    }
};

int multi_level_inheritance_main() {
    C child;
    return 0;

}
