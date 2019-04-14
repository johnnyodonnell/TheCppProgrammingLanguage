#include <iostream>

/*
 * The results of print *pi is undefined
 *
 */

using namespace std;

int* generate() {
    int i = 10;
    int* pi = &i;
    cout << pi << endl;
    return pi;
}

int main() {
    int* pi = generate();
    cout << pi << endl;
    cout << *pi << endl;
}

