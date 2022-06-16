#include <iostream>

using namespace std;

float area(int radius) {
    float area = (float) 22 / 7 * radius * radius;
    return area;
}

int functions_in_cpp() {
    int radius;
    cout << "Enter the radius -> " << endl;
    cin >> radius;
    cout << "Area = " << area(radius) << endl;
    return 0;

}