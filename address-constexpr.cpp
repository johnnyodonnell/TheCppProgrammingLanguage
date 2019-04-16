#include <iostream>

/*
 * From p.267
 *
 * For some reason, this doesn't work when I run it.
 *
 * Looking for help here:
 * https://stackoverflow.com/questions/55698844/is-the-address-of-a-local-variable-a-constexpr
 *
 */

using namespace std;

extern char glob;

void f(char loc) {
    constexpr const char* p0 = &glob;
    constexpr const char* p2 = &loc;
}

int main() {
    f('a');
}

