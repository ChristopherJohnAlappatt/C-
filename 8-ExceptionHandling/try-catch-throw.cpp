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
        }
        c = a / b;
        cout << c << endl;
    } catch (int e) {
        cout << "Dividing by zero . ERROR CODE : " << e << endl;
    }

    return 0;
}
