#include <iostream>
using namespace std;

class Sample {
private:
    int x = 10;

    friend void show(Sample);
};

void show(Sample s) {
    cout << s.x;
}

int main() {
    Sample s;
    show(s);
}
