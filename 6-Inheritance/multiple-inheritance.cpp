#include<iostream>

using namespace std;

class A {
public:
    A() {
        cout << "Class A created !!" << endl;
    }
};

class B {
public :
    B() {
        cout << "Class B created !!" << endl;
    }
};

class C : public A, public B {
public:
    C() {
        cout << "Class C created !!" << endl;
    }
};

int multiple_inheritance_main() {
    C child;
    return 0;

}
