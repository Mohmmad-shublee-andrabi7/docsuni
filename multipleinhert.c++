#include <iostream>
using namespace std;

class Father {
public:
    void fshow() {
        cout << "Father" << endl;
    }
};

class Mother {
public:
    void mshow() {
        cout << "Mother" << endl;
    }
};

class Child : public Father, public Mother {};

int main() {
    Child c;
    c.fshow();
    c.mshow();
}
