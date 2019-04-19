namespace Name {
    #include "obj.h"
}

/*
 * As mentioned on p. 430, C++ headers cannot be included into a namespace
 * like C headers can
 *
 * See also p. 414. Somehow the example here is able to include C++ headers
 * into a namespace
 *
 * Asking for help here:
 * https://stackoverflow.com/questions/55755236/is-it-possible-to-include-a-namespaced-class-into-another-namespace
 */

int main() {
    Name::Obj o;
    o.print();
}

