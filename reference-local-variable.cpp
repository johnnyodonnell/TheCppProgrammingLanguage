#include <iostream>


// From p. 191

/*
 * Why does create_const_reference cause a segementation fault, but
 * create_const_reference_2 does not?
 */

using namespace std;

int& create_reference_free_store() {
    int* i = new int{1};
    return (*i);
}

int* create_pointer_free_store() {
    int* i = new int{2};
    return i;
}

int& create_reference() {
    int i = 3;
    return i;
}

int* create_pointer() {
    int i = 4;
    return &i;
}

const int& create_const_reference() {
    int i = 5;
    return i;
}

const int& create_const_reference_2() {
    const int& i {6};
    return i;
}

int main() {
    int& i = create_reference_free_store();
    cout << i << endl;

    int* j = create_pointer_free_store();
    cout << (*j) << endl;

    // This will produce a segmentation fault
    /*
    int& k = create_reference();
    cout << k << endl;
    */

    // This will produce a segmentation fault
    /*
    int* l = create_pointer();
    cout << (*l) << endl;
    */

    // This will produce a segmentation fault
    /*
    const int& m = create_const_reference();
    cout << m << endl;
    */

    const int& n = create_const_reference_2();
    cout << n << endl;
}

