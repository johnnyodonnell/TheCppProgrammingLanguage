#include <iostream>

/*
 * This program works on the g++ compiler, but according to SO this probably
 * won't work on other compilers and is not part of the C++ standard
 *
 * https://stackoverflow.com/questions/9219712/c-array-expression-must-have-a-constant-value
 *
 * As p.174 mentions, a vector should be used in this case
 *
 */

using namespace std;

void create(const int i) {
    char arr[i];
    cout << sizeof(arr) << endl;
}

void create2(int i) {
    char arr[i];
    cout << sizeof(arr) << endl;
}

int main() {
    int i;
    cout << "Enter an array size:" << endl;
    cin >> i;
    cout << endl;

    create(i);
    create2(i);
    create2(2 * i);
}

