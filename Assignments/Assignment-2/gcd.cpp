#include <iostream>

using namespace std;

int gcd() {

    int a, b, temp;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    if (b > a) {
        while (a != 0) {
            b = b % a;
            temp = b;
            b = a;
            a = temp;
        }
    }
    cout << "The GCD of is " << b;
    return 0;
}

