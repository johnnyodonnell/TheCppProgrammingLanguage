#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    vector<int> v {0, 1, 2, 3, 4, 5, 6};
    rotate(v.begin(), v.begin()+2, v.end());
    for (auto i : v) {
        cout << i << ", ";
    }
};

