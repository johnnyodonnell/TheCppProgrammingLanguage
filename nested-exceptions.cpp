#include <iostream>

/*
 * Inspired by example from p. 872
 *
 * As per:
 * https://en.cppreference.com/w/cpp/error/rethrow_if_nested
 * The exception class must a be polymorphic class,
 * otherwise rethrow_if_nested will have no affect.
 * Hence, the declaration of exception_base.
 *
 */

using namespace std;

struct exception_base {
    virtual void print() = 0;
};

struct exception1 : exception_base {
    void print() {
        cout << "Exception 1" << endl;
    }
};

struct exception2 : exception_base {
    void print() {
        cout << "Exception 2" << endl;
    }
};

int func2() {
    throw exception2 {};
}

int func1() {
    try {
        func2();
    } catch(...) {
        exception1 e {};
        throw_with_nested(e);
    }
}

int main() {
    try {
        func1();
    } catch(exception1& e) {
        e.print();

        try {
            rethrow_if_nested(e);
        } catch(exception2& e) {
            e.print();
        }
    }

    cout << "Program ended successfully" << endl;
}

