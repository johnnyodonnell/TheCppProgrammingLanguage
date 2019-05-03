#include <iostream>

/*
 * Inspired by comment on p. 930
 *
 * Added to after reading p. 968
 *
 * Added Functor logic after reading p. 1026
 *
 */

using namespace std;

void func(int) {
    cout << "int" << endl;
}

void func(int, int) {
    cout << "int, int" << endl;
}

struct Functor {
    void operator()(int) {
        cout << "int" << endl;
    }

    void operator()(int, int) {
        cout << "int, int" << endl;
    }
};

template <typename Func>
void caller(Func func) {
    func(1);
}

int main() {
    func(1);
    func(1, 1);

    // caller(func); // Compile time error
    caller((void (*)(int)) func);

    caller(Functor{});
};

