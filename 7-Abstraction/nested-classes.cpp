#include<iostream>

using namespace std;

class A { // outer-class
public:
    class B { // inner-class
    public:
        int a, b;

        void display() {
            cout << a << "\n" << b << "\n" << x << endl;
        }
    };

    static int x;
    int y;
    B b;
};

int main() {

    return 0;

}
