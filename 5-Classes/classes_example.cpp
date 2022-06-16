#include <iostream>

using namespace std;

class Testing {
private:
    int a;
    int b;
public :
    int c;
    int d;

    Testing() {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }

    void print_values() {
        cout << a << endl << b << endl << c << endl << d << endl;
    }
};

int classes_example_main() {
    cout << "Welcome to Classes example program : " << endl;

    Testing x;
    cout << "Enter 2 numbers : " << endl;
    cin >> x.c >> x.d;
    x.print_values();
    return 0;
}
