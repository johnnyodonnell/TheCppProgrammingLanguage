#include <iostream>

/*
 * In the final example, Derived d is copied to Base b
 *
 */

using namespace std;

class Base {
    public:
        void print() {
            cout << "print from Base" << endl;
        }

        virtual void printv() {
            cout << "printv from Base" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "print from Derived" << endl;
        }

        virtual void printv() {
            cout << "printv from Derived" << endl;
        }
};

int main() {
    Base b;
    b.print();
    b.printv();
    cout << endl;

    Derived d;
    d.print();
    d.printv();
    cout << endl;

    Base* bp = &d;
    bp->print();
    bp->printv();
    cout << endl;

    b = d;
    b.print();
    b.printv();
}

