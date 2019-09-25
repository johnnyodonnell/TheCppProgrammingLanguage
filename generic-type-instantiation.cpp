#include <iostream>

/*
 * Unlike in Java, C++ can instantiate a generic type because
 * it creates a distinct defintion for each template type
 * that is used
 *
 */

using namespace std;

class MyObject {
    public:
        void print() {
            cout << "Hello from MyObject" << endl;
        }
};

template <typename T>
T* create() {
    return new T{};
}

int main() {
    create<MyObject>()->print();
}

