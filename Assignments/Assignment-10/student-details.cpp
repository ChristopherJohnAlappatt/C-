#include<iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    string name;
    int rollNo;
    float grades;
    ofstream my_file;
    my_file.open("students_details.txt");
    cout << "Enter the number of students : " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Student Name : " << endl;
        cin >> name;
        my_file << "Student Name : " << name << endl;
        cout << "Student Roll No : " << endl;
        cin >> rollNo;
        my_file << "Student Roll No : " << rollNo << endl;
        cout << "Student Grades : " << endl;
        cin >> grades;
        my_file << "Student Grades : " << grades << endl;
    }
    return 0;
}
