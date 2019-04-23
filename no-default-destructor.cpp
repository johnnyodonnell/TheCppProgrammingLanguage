#include <iostream>

/*
 * From p. 518 and p. 523
 *
 * Not the results I was expecting
 *
 * Asking for help:
 * https://stackoverflow.com/questions/55813870/are-non-static-class-members-destroyed-even-without-a-destructor
 *
 * This may help:
 * https://stackoverflow.com/questions/1524730/c-when-are-non-pointers-class-member-destroyed
 *
 * Conclusion:
 * It looks like Bjarne was wrong on p. 518 and p. 523
 *
 */

using namespace std;

class SubObj {
    public:
        ~SubObj() {
            cout << "SubObj Destructor called" << endl;
        }
};

class Obj {
    private:
        SubObj so;

    public:
        Obj() {};
        Obj(const Obj& o) {};
};

int main() {
    Obj();
    cout << "Program end" << endl;
}

