#include <iostream>

/*
 * From p.275
 *
 */

using namespace std;

unsigned short middle(int a) {
    // Not sure why the "& 0xFFFF" is necessary here when compared to
    // the function middle2
    return (a >> 8) & 0xFFFF;
}

unsigned short middle2(int a) {
    return a >> 8;
}

int main() {
    int x = 0xFF00FF00;
    unsigned short y = middle(x);
    unsigned short y2 = middle2(x);

    cout << y << endl;
    cout << y2 << endl;
}

