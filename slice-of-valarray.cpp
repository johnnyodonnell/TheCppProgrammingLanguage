#include <iostream>
#include <valarray>

/*
 * Inspired by p. 1174
 *
 */

using namespace std;

int main() {
    valarray<int> v {1, 2, 3, 4};
    for (auto& i : v) {
        cout << i;
    }
    cout << endl;

    slice_array<int> s1 = v[slice(0,2,1)];
    slice_array<int> s2 = v[slice(2,2,1)];
    s1 = s2;

    for (auto& i : v) {
        cout << i;
    }
    cout << endl;
}

