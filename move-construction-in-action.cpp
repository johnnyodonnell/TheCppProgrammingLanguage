#include <iostream>


using namespace std;

int counter = 1;

class Obj {
    private:
        int id;
        int num;

    public:
        Obj() :id{counter++}, num{0} {
            cout << "Standard constructor called" << endl;
        }

        Obj(const Obj& o) :id{counter++}, num{0} {
            cout << "Copy constructor called" << endl;
        }

        Obj(Obj&& o) :id{o.id}, num{o.num} {
            cout << "Move constructor called" << endl;
        }

        void incrementAndPrint() {
            num++;
            cout << "Object id: " << id << endl;
            cout << "Address: " << this << endl;
            cout << "Call number: " << num << endl;
            cout << endl;
        }
};

Obj valueToValue(Obj o) {
    o.incrementAndPrint();
    return o;
}

Obj referenceToValue(Obj& o) {
    o.incrementAndPrint();
    return o;
}

int main() {
    Obj o = valueToValue(Obj());
    o.incrementAndPrint();

    /*
     * Interesting that a move constrcutor does not get called here
     * This might be due to g++ compiler optmization
     *
     * See:
     * https://stackoverflow.com/questions/13125632/when-does-move-constructor-get-called
     * https://stackoverflow.com/questions/7645985/move-constructor-is-not-getting-called-in-c0x
     * https://stackoverflow.com/questions/38246823/why-is-the-move-constructor-not-called
     * https://stackoverflow.com/questions/12953127/what-are-copy-elision-and-return-value-optimization
     *
     */
    Obj o2(referenceToValue(o));
    o2.incrementAndPrint();
}

