#include <iostream>

/*
 * Inspired by p. 798
 *
 */

using namespace std;

class Obj {
    public:
        Obj() {
            cout << this << endl;
            cout << "Constructing" << endl;
        }

        Obj(const Obj& o) {
            cout << this << endl;
            cout << "Copying" << endl;
        }

        ~Obj() {
            cout << this << endl;
            cout << "Destroying" << endl;
        }
};

void init() {
    Obj& o = *new Obj{};
    // delete &o; // needs this somewhere to avoid memory leak
}

int main() {
    init();
}

