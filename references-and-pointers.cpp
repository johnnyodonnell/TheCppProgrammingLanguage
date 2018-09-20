#include <iostream>


// Great SO Answer from Scott Stanchfield:
// https://stackoverflow.com/questions/40480/is-java-pass-by-reference-or-pass-by-value

/*
 * Essentially Java is always pass-by-value. Primitives are copied and objects
 * are passed to a function via a pointer.
 */

using namespace std;

void value(int a) {
    a = 2;
}

void reference(int& a) {
    a = 3;
}

void pointer(int* a) {
    *a = 4;
}

int main() {
    int a = 1;
    cout << "Original, a: " << a << endl;

    value(a);
    cout << "After pass-by-value, a: " << a << endl;

    reference(a);
    cout << "After pass-by-reference, a: " << a << endl;

    pointer(&a);
    cout << "After passing a pointer by value, a: " << a << endl;
}

