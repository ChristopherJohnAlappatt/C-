#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

int function_overloading_main() {
    int a, b;
    cout << "Please enter 2 integer numbers : " << endl;
    cin >> a >> b;
    float c, d;
    cout << "Please enter 2 float numbers : " << endl;
    cin >> c >> d;
    cout << sum(a, b) << endl;
    cout << sum(c, d) << endl;
    return 0;
}
