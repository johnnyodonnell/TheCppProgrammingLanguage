#include <iostream>
using namespace std;


// From p. 46
// Illustrating the behavior of references

int main() {
    int v[] = {1, 2, 3, 4};

    cout << "Printing values of array\n";
    for (auto x : v) {
        cout << x++;
    }
    cout << "\n";
    cout << "\n";

    cout << "Printing references of array with post increment\n";
    for (auto& x : v) {
        cout << x++;
    }
    cout << "\n";
    cout << "\n";

    cout << "Printing values of array\n";
    for (auto x : v) {
        cout << x;
    }
    cout << "\n";
}

