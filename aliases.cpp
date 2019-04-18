#include <iostream>


using namespace std;

namespace arbitrarily_long_name {
    const char* message = "Hello World!";
}

int main() {
    using integer = int;
    integer i = 10;
    cout << i << endl;

    namespace arb = arbitrarily_long_name;
    cout << arb:: message << endl;

    /*
     * Compiler error
     *
    using arb2 = arbitrarily_long_name;
    cout << arb2:: message << endl;
     */
}

