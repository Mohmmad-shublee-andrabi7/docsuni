#include <iostream>
using namespace std;

class Count {
public:
    static int cnt;

    Count() {
        cnt++;
    }
};

int Count::cnt = 0;

int main() {
    Count c1, c2, c3;
    cout << Count::cnt;
}
