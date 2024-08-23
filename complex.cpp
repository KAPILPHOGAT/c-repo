
#include <iostream>
using namespace std;

class sum {
    int a;
    int b;

public:
    void setnum(int a1, int b1);
    void sumcomp(sum c1, sum c2);
    void print() {
        cout << a << '+' << b << 'i' << endl;
    }
};

void sum::setnum(int a1, int b1) {
    a = a1;
    b = b1;
}

void sum::sumcomp(sum c1, sum c2) {
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}

int main() {
    sum dh, tuj, opi;
    dh.setnum(5, 9);
    tuj.setnum(8, 49);
    opi.sumcomp(dh, tuj);
    opi.print();
    return 0;
}
