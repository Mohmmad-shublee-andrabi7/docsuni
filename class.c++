#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.name = "Shublee";
    s.roll = 101;
    s.display();
    return 0;
}
