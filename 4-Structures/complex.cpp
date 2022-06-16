#include <iostream>

using namespace std;

struct complex_numbers {
    int real;
    int imaginary;
};

complex_numbers adding_complex_numbers(complex_numbers a, complex_numbers b) {
    complex_numbers c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

int complex_main() {
    complex_numbers a, b, c;
    cout << "Welcome to complex number program : " << endl;
    cout << "Enter two complex numbers : " << endl;
    cin >> a.real >> a.imaginary;
    cin >> b.real >> b.imaginary;
    c = adding_complex_numbers(a, b);
    cout << c.real << " +i" << c.imaginary;
    return 0;
}
