#include <iostream>
using namespace std;

class Copy {
public:
    int x;

    Copy(int a) {
        x = a;
    }

    Copy(Copy &obj) {
        x = obj.x;
    }
};

int main() {
    Copy c1(10);
    Copy c2 = c1;
    cout << c2.x;
}
