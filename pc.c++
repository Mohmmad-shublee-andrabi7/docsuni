#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    Car(string b) {
        brand = b;
    }

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c("BMW");
    c.show();
}
