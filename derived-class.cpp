#include <iostream>

/*
 * Based on p. 580, I did not expect this to compile since these are
 * not manipulated through pointers or references.
 *
 * "In other words, an object of a derived class can be treated as an
 * object of its base class when manipulated through pointers and
 * references."
 *
 * Conclusion:
 * A derived class can be copied into a base class. Here that is exactly
 * what is happening. Derived d is used as the copy constructor argument
 * for Base b.
 *
 * p. 587 supports this conclusion:
 * "To get runtime polymorphic behavior in C++, the member functions
 * called must be virtual and objects must be manipulated through
 * pointers or references"
 *
 * Adding example Base& br, so further illustrate this idea
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

    Base& br = d;
    br.print();
}

