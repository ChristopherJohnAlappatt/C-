#include <iostream>

using namespace std;
struct employee {
    string name;
    int empid;
    float salary;
};

void print_employee_list(employee arr[]) {
    for (int i = 0; i < 3; i++) {
        cout << arr[i].name << "\t";
        cout << arr[i].empid << "\t";
        cout << arr[i].salary << "\n";

    }
}

int structures_examples_main() {
    employee arr[3];
    cout << "Welcome to Employee program : " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter employee name : " << endl;
        cin >> arr[i].name;
        cout << "Enter employee ID : " << endl;
        cin >> arr[i].empid;
        cout << "Enter employee Salary : " << endl;
        cin >> arr[i].salary;
    }
    print_employee_list(arr);
    return 0;
}
