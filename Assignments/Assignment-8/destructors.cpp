#include<iostream>

using namespace std;

class Base {
public :
    int a, b;

    Base() {
        cout << "Base constructor is called " << endl;
    }

    ~Base() {
        cout << "Base destructor is called " << endl;
    }
};

class Derived : public Base {
public :
    Derived() {
        cout << "Derived constructor is called " << endl;
    }

    ~Derived() {
        cout << "Derived destructor is called " << endl;
    }

};

int main() {
    Derived b;
    return 0;

}
