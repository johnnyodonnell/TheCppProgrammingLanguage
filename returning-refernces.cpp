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

// Will cause warning
Obj& valueToReference(Obj o) {
    o.incrementAndPrint();
    return o;
}

Obj& referenceToReference(Obj& o) {
    o.incrementAndPrint();
    return o;
}

Obj referenceToValue(Obj& o) {
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

    cout << "Value to reference to object: " << endl;
    Obj o3 = valueToReference(o);
    o.incrementAndPrint();
    o3.incrementAndPrint();
    cout << endl;

    cout << "Value to reference to reference: " << endl;
    Obj& o4 = valueToReference(o);
    o.incrementAndPrint();
    // o4.incrementAndPrint(); // This will cause a Segmentation Fault
    cout << endl;

    cout << "Reference to reference to object: " << endl;
    Obj o5 = referenceToReference(o);
    o.incrementAndPrint();
    o5.incrementAndPrint();
    cout << endl;

    cout << "Reference to reference to reference: " << endl;
    Obj& o6 = referenceToReference(o);
    o.incrementAndPrint();
    o6.incrementAndPrint();
    cout << endl;

    cout << "Reference to value to object: " << endl;
    Obj o7 = referenceToValue(o);
    o.incrementAndPrint();
    o7.incrementAndPrint();
    cout << endl;

    /*
     * This will cause a compile-time error
     *
    cout << "Reference to value to reference: " << endl;
    Obj& o8 = referenceToValue(o);
    o.incrementAndPrint();
    o8.incrementAndPrint();
    cout << endl;
    */
}

