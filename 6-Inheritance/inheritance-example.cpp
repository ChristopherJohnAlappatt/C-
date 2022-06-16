#include<iostream>

using namespace std;

class Parent1 {
private :
    int salary;
public :
    int no_of_houses;

//    Parent2(int salary, int no_of_houses) {
//        salary = salary;
//        no_of_houses = no_of_houses;
//    }

    void set_parent_salary(int number) {
        salary = number;
    }

    int get_parent_salary() {
        return salary;
    }
};

class Child1 : public Parent1 {

public :
    int no_of_siblings;

    int set_values(int parentSalary, int houses, int siblings) {
        set_parent_salary(parentSalary);
        no_of_houses = houses;
        no_of_siblings = siblings;
    }

    void display() {
        cout << "Parents Salary -> " << get_parent_salary() << endl;
        cout << "Parents No - of - houses  -> " << no_of_houses << endl;
        cout << "Child2's Siblings -> " << no_of_siblings << endl;
    }
};


int inheritance_main() {
    Child1 christopher;
    christopher.set_values(30000, 2, 3);
    christopher.display();

}
