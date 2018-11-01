#include <iostream>
#include <vector>



/* From p.516
 *
 * "In a few cases, such as for a return value, the language rules say that
 * it can [use a move operation]"
 */

/* From p. 517
 *
 * "Matrix has a move operation so that 'return by value' is simple and
 * effecient as well as 'natural'"
 */

/*
 * The results of this program don't seem to confirm the statements made above
 */

using namespace std;

vector<int> ident(vector<int>& v) {
    return v;
};

int main() {
    vector<int> a {};
    const vector<int>& b = ident(a);

    cout << "a size: " << a.size() << endl;
    cout << "b size: " << b.size() << endl;

    a.push_back(1);

    cout << "a size: " << a.size() << endl;
    cout << "b size: " << b.size() << endl;
}

