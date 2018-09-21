#include <iostream>


// Inspired by code from p. 197
// The result of this program is pretty wild

using namespace std;

int main() {
    char c = 'j';
    char* cp = &c;

    while (cp) {
        cout << *cp++;
    }
}

