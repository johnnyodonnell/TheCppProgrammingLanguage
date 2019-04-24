#include <iostream>

/*
 * Based on p. 580, I did not expect this to compile since these are
 * not manipulated through pointers or references.
 *
 * "In other words, an object of a derived class can be treated as an
 * object of its base class when manipulated through pointers and
 * references."
 *
 */

using namespace std;

class Base {
    public:
        void print() {
            cout << this << endl;
        }
};

class Derived : public Base {};

int main() {
    Derived d;
    d.print();

    Base b = d;
    b.print();
}

