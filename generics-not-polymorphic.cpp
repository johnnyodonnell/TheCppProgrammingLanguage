#include <iostream>
#include <vector>

/*
 * This isn't from the book, but wanted to see how this behavior
 * compared to Java and TypeScript. This kind of behavior is
 * not allowed in Java either, but for different reasons. This
 * behavior is allowed in TypeScript for quite odd results
 * at times.
 *
 * The reason this doesn't work in C++ is because the C++ compiler
 * will generate a function `func` for each type `T` that calls
 * `func`. In this cause it only a generates a function for the type
 * `int`. And thus, in that function, `vec` can't `push_back` an
 * object of type `string`
 *
 * In Java, the compiler has its own way of catching this by making
 * sure that `List<Integer>` is not a subtype of `List<Object>`
 */

using namespace std;

template <typename T>
void func(vector<T>& vec) {
    vec.push_back(10);

    /*
     * This will cause a compiler error
     */
    vec.push_back("this is a string");
}

int main() {
    vector<int> vec {1, 2, 3};
    func(vec);
}

