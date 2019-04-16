#include <vector>
#include <iostream>
#include <algorithm>

/*
 * Used for
 * https://stackoverflow.com/questions/55714369/are-there-performance-concerns-when-constructing-lambdas-inside-other-functions
 *
 * I may have to run to run a timed test myself and see what happens
 */

using namespace std;

int f1(vector<int> v) {
    for_each(v.begin(), v.end(), [](int i) { cout << i << endl; });
}

auto print_int = [](int i) { cout << i << endl; };
int f2(vector<int> v) {
    for_each(v.begin(), v.end(), print_int);
}

int main() {
    vector<int> v {4, 5, 6};
    f1(v);
    f2(v);
}

