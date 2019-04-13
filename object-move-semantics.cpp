#include <iostream>
#include <string>


using namespace std;

class Obj {
    public:
        void incrementAndPrint() {
            cout << "Object id: " << this << endl;
            cout << endl;
        }
};

class Obj2 {
    public:
        Obj2() {}

        Obj2(const Obj2& old_o) {}

        Obj2(Obj2&& old_o) {}

        void incrementAndPrint() {
            cout << "Object id: " << this << endl;
            cout << endl;
        }
};

template <typename OGeneral>
OGeneral create() {
    OGeneral o;
    o.incrementAndPrint();
    return o;
}

template <typename OGeneral>
OGeneral identity(OGeneral o) {
    o.incrementAndPrint();
    return o;
}

int main() {
    cout << "create Obj: " << endl;
    Obj o = create<Obj>();
    o.incrementAndPrint();

    cout << "identity Obj: " << endl;
    Obj o1 = identity(o);
    o1.incrementAndPrint();

    cout << "create Obj2: " << endl;
    Obj2 o2 = create<Obj2>();
    o2.incrementAndPrint();

    cout << "identity Obj2: " << endl;
    Obj2 o3 = identity(o2);
    o3.incrementAndPrint();
}

