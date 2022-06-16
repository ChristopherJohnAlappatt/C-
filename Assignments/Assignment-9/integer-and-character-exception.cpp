#include<iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Welcome to Exception Handling program" << endl;
    cout << "Enter 2 numbers : " << endl;
    cin >> a >> b;
    try {
        if (b == 0) {
            throw 1;
        } else if (b == 1) {
            throw 'e';
        }
        c = a / b;
        cout << c << endl;
    } catch (int e) {
        cout << "Dividing by zero . ERROR CODE : " << e << endl;
    } catch (char e) {
        cout << "Dividing by one . Result is the same as numerator !!!" << e << endl;
        cout << a << "  /   " << b << "   =    " << a / b << endl;
    }

    return 0;
}
