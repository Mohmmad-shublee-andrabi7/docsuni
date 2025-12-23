#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Constructor called" << endl;
    }
};

int main() {
    Person p;
    return 0;
}
