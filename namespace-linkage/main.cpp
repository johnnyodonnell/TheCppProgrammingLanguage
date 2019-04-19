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
 *
 * Conclusion:
 * It looks like this example accurately reflects the statements made at the
 * end of section 15.2.5 on p.430. If I'm understanding it correctly, with a
 * C library we won't experience these linker errors because the linker
 * won't care about the namespace of a C declaration (i.e. function).
 * However, it does care for a C++ declaration. Meaning we can't easily port
 * over a C++ library into a namespace. Though it's not impossible.
 * For the example on p. 414 we have full control over the library so we
 * can change the how the class is defined. For example, we can define
 * the class as its defined in the StackOverflow answer.
 */

int main() {
    Name::Obj o;
    o.print();
}

