#include <iostream>
#include <string>


using namespace std;

class Dog {
    private:
        string name;

    public:
        Dog(string _name): name(move(_name)) {}

        void setName(string _name) {
            name = _name;
        }

        void printName() {
            cout << "Dog's name: " << name << endl;
        }
};

void value(Dog dog) {
    dog.setName("Andrew");
    dog.printName();
}

void reference(Dog& dog) {
    dog.setName("Jeff");
    dog.printName();
}

void pointer(Dog* dog) {
    dog->setName("Tim");
    dog->printName();
}

int main() {
    Dog dog("Johnny");
    dog.printName();
    cout << endl;

    value(dog);
    dog.printName();
    cout << endl;

    reference(dog);
    dog.printName();
    cout << endl;

    pointer(&dog);
    dog.printName();
    cout << endl;
}

