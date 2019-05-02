#include <iostream>

/*
 * Inspired by comment on p. 930
 *
 * Added to after reading p. 968
 *
 */

using namespace std;

void func(int) {
    cout << "int" << endl;
}

void func(int, int) {
    cout << "int, int" << endl;
}

template <typename Func>
void caller(Func func) {
    func(1);
}

int main() {
    func(1);
    func(1, 1);

    // caller(func); // Compile time error
    caller((void (*)(int)) func);
};

