#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Generic Payment" << endl;
    }
};

class UPI : public Payment {
public:
    void pay() {
        cout << "UPI Payment" << endl;
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Card Payment" << endl;
    }
};

int main() {
    Payment* p;
    UPI u;
    Card c;

    p = &u;
    p->pay();

    p = &c;
    p->pay();
}
