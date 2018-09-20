#include <iostream>
#include <string>


using namespace std;

int counter = 1;

class Obj {
    private:
        int id;
        int num;

    public:
        Obj() {
            id = counter++;
            num = 0;
        }

        Obj(const Obj& old_o) {
            id = counter++;
            num = 0;
        }

        Obj(Obj& old_o) {
            id = counter++;
            num = 0;
        }

        Obj(Obj&& old_o) {
            id = counter++;
            num = 0;
        }

        void incrementAndPrint() {
            num++;
            cout << "Object id: " << id << endl;
            cout << "Call number: " << num << endl;
            cout << endl;
        }
};

Obj valueToValue(Obj o) {
    o.incrementAndPrint();
    return o;
}

// Calling this function will cause a runtime error
Obj& valueToReference(Obj o) {
    o.incrementAndPrint();
    return o;
}

Obj& referenceToReference(Obj& o) {
    o.incrementAndPrint();
    return o;
}

int main() {
    Obj o;
    o.incrementAndPrint();
    cout << endl;

    cout << "Value to value: " << endl;
    Obj o2 = valueToValue(o);
    o.incrementAndPrint();
    o2.incrementAndPrint();
    cout << endl;

    cout << "Reference to reference to object: " << endl;
    Obj o3 = referenceToReference(o);
    o.incrementAndPrint();
    o3.incrementAndPrint();
    cout << endl;

    cout << "Reference to reference to reference: " << endl;
    Obj& o4 = referenceToReference(o);
    o.incrementAndPrint();
    o4.incrementAndPrint();
    cout << endl;
}

