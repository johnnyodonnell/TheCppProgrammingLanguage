#include <iostream>

/*
 * The reason `factory` doesn't work is because even though `o`
 * is of type rvalue reference (T&&), it is actually an lvalue
 * because it has a name.
 *
 * Thus, to forward it to SuperObj as an rvalue, we must use
 * `std::foward`. The same principle applies when move constructing
 * in SuperObj. `oo` must be moved to when initializing `o`.
 *
 * For more see: info-on-forwarding.txt
 */

using namespace std;

class Obj {
    public:
        Obj() {}

        Obj(const Obj&) {
            cout << "Obj copied!" << endl;
        }

        Obj(Obj&&) {
            cout << "Obj moved!" << endl;
        }
};

class SuperObj {
    private:
        Obj o;

    public:
        SuperObj(const Obj& oo) :o{oo} {
            cout << "SuperObj copy constructed" << endl;
        }

        SuperObj(Obj&& oo) :o{move(oo)} {
            cout << "SuperObj move constructed" << endl;
        }
};

template <typename T>
void factory(T&& o) {
    SuperObj s {o};
}

template <typename T>
void perfect_factory(T&& o) {
    SuperObj s {forward<T>(o)};
}

int main() {
    Obj o {};

    factory(o);
    cout << endl;
    factory(Obj{});
    cout << endl;

    perfect_factory(o);
    cout << endl;
    perfect_factory(Obj{});
    cout << endl;
}

