namespace Name {
    #include "obj.h"
}

/*
 * As mentioned on p. 430, C++ headers cannot be included into a namespace
 * like C headers can
 *
 */

int main() {
    Name::Obj o;
    o.print();
}

