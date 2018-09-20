#include <iostream>
#include <vector>
#include <utility>

// From p. 166
// Illustrating the move feature

using namespace std;

int main() {
    vector<string> v1;
    v1.push_back("Hello");
    v1.push_back("World!");

    cout << "Moving v1 to v2" << endl << endl;
    vector<string> v2 = move(v1);

    cout << "v1 size: " << v1.size() << endl;
    cout << "v2 size: " << v2.size() << endl;

    cout << endl;
    cout << "v1 elements:" << endl;
    for (auto const& s : v1) {
        cout << s << endl;
    }

    cout << endl;
    cout << "v2 elements:" << endl;
    for (auto const& s : v2) {
        cout << s << endl;
    }
}

