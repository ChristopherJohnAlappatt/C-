#include<iostream>

using namespace std;

class Rectangle {
private :
    int length;
    int breadth;
    int area;
public :
    static int count;

    Rectangle(int a, int b) {
        length = a;
        breadth = b;
        area = 0;
        count++;
    }

    int calculate_area() {
        area = length * breadth;
        return area;
    }

};

int Rectangle::count = 0;

int main() {
    cout << Rectangle::count << endl;
    Rectangle a(2, 3);
    cout << Rectangle::count << endl;
    Rectangle b(3, 4);
    cout << Rectangle::count << endl;
    Rectangle c(4, 5);
    cout << Rectangle::count << endl;
    cout << "Area A -> " << a.calculate_area() << "\n" << "Area B -> " << b.calculate_area() << "\n" << "Area C -> "
         << c.calculate_area() << "\n" << endl;

    return 0;

}
