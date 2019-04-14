#include <iostream>


using namespace std;

class Obj {
    public:
        Obj(int _i) :i{_i} {}

        void print() {
            cout << i << endl;
        }

    private:
        int i;
};

int main() {
    Obj o {1};
    o.print();

    Obj o2(2);
    o2.print();
}

