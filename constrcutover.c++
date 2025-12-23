#include <iostream>
using namespace std;

class Box {
public:
    Box() {
        cout << "Default Constructor" << endl;
    }
    Box(int x) {
        cout << "Parameterized Constructor" << endl;
    }
};

int main() {
    Box b1;
    Box b2(10);
}
