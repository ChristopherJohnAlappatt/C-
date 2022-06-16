#include <iostream>

using namespace std;

void swap(int *, int *);

int call_by_reference() {
    int a, b;
    cout << "Enter 2 numbers : " << endl;
    cin >> a >> b;
    cout << "Before Swapping " << a << "\t" << b << endl;
    swap(&a, &b);
    cout << "After Swapping " << a << "\t" << b << endl;
    return 0;

}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}