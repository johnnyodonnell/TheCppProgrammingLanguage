#include <iostream>

/*
 * Inspired by comment on p. 930
 *
 * This will fail to compile
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
    func(1, 1);
}

int main() {
    func(1);
    func(1, 1);
    caller(func);
};
