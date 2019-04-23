#include <iostream>
#include <memory>

/*
 * From p. 545
 *
 */

using namespace std;

int main() {
    unique_ptr<int> p = nullptr;

    if (!p) {
        cout << "Null" << endl;
    }

    if (p) {
        cout << "Not null" << endl;
    }

    bool b = p;
}

