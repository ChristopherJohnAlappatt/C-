#include<iostream>

using namespace std;

class B;

class A {
private :
    int pvt_element;
public :
    friend B; // By using friend keyword we can access the private elements of the parent class
};

class B {
public :
    A a;

    void display() {
        cout << "Inside Class B " << endl;
        a.pvt_element = 10;
        cout << a.pvt_element << endl;
    }
};

int main() {
    B b;
    b.display();
    return 0;

}
