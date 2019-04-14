#include <iostream>


/*
 * This SO question is helpful to understand this behavior:
 * https://stackoverflow.com/questions/3228664/why-am-i-able-to-change-the-contents-of-const-char-ptr
 *
 */

using namespace std;

int main() {
    const char* str = "example";
    cout << str << endl;

    str = "another example";
    cout << str << endl;

    const int i = 5;
    cout << i << endl;

    /*
     * This throws compile-time error
     *
    i = 6;
    cout << i << endl;
    */

    const char* const const_str = "const const example";
    cout << const_str << endl;

    /*
     * This throws compile-time error
     *
    const_str = "another const const example";
    cout << const_str << endl;
    */
}

