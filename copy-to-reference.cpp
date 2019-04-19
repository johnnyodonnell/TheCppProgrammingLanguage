#include <iostream>

/*
 * A bit surprised by the result of update. I figured that after
 * calling update, o2 would have the same address as o.
 *
 * Asked for help:
 * https://stackoverflow.com/questions/55766515/why-does-assignment-to-a-reference-use-the-copy-assignment-operator
 *
 * Question that helps answer my question:
 * https://stackoverflow.com/questions/728233/why-are-references-not-reseatable-in-c/
 *
 */

using namespace std;

class Obj {
    public:
        Obj& operator=(const Obj& o) {
            cout << "Copy assignment operator called" << endl;
            return *this;
        }

        Obj& operator=(Obj&& o) {
            cout << "Move assignment operator called" << endl;
            return *this;
        }

        void print() {
            cout << this << endl;
        }
};

Obj o;

int update(Obj& o) {
    o = ::o;
}

Obj& identity(Obj& o) {
    return o;
}

int main() {
    Obj o2;

    cout << "Update" << endl;
    update(o2);

    o.print();
    o2.print();

    cout << endl;

    cout << "Identity" << endl;
    o2 = identity(o2);
    Obj& o3 = identity(o2);

    o2.print();
    o3.print();
}

