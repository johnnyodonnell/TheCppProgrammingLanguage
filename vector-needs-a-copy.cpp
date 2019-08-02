#include <iostream>
#include <vector>

/*
 * This program will cause a compile time error because a vector
 * or a pair need to store it's own copy of the data. It can only
 * do that via a copy or a move. Because the copy constructor has
 * been deleted, a copy cannot be made.
 *
 * Also, not that a reference type can't be used to circument this
 * need for a vector or pair to have their own copy.
 * See: https://stackoverflow.com/questions/922360/why-cant-i-make-a-vector-of-references
 *
 */

using namespace std;

class Cell {
    public:
        Cell() {};
        Cell(const Cell& cell) = delete;
};

void nothing(const Cell& cell) {
    cout << "Nothing" << endl;
}

int main() {
    vector<Cell> cells {};

    Cell cell {};
    nothing(cell);

    cells.push_back(cell);
    pair<Cell, int> pr {cell, 1};
}

