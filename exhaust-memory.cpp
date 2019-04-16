#include <iostream>
#include <vector>

/*
 * From p. 283
 *
 * When run on my HP laptop, this program ended with a segmentation fault
 *
 */

using namespace std;

int main() {
    vector<char*> v;
    try {
        while (true) {
            char* p = new char[10000];
            v.push_back(p);
            p[0] = 'x';
        }
    } catch(bad_alloc) {
        cerr << "Memory exhausted" << endl;
    }
}

