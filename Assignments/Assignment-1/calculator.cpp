#include <iostream>
using namespace std;
int calculator() {
    int choice;
    float a, b, result;
    cout << "Welcome to Calculator program : " << endl;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "Press \n 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division" << endl;
    cin >> choice;
    switch (choice) {
        case 1 :
            result = a + b;
            cout << a << " + " << b << " = " << result;
            break;
        case 2 :
            result = a - b;
            cout << a << " - " << b << " = " << result;            break;
        case 3 :
            result = a * b;
            cout << a << " * " << b << " = " << result;
            break;
        case 4:
            result = a / b;
            cout << a << " / " << b << " = " << result;
        default :
            cout << "Invalid input . Please select a number between 1 and 4";
            break;
    }
    return 0;
}
