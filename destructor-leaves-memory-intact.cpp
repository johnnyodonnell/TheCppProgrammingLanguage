#include <iostream>
#include <vector>

/*
 * Explanation:
 * https://stackoverflow.com/questions/7396059/explicit-call-to-destructor-is-not-destroying-my-object-why
 *
 */

using namespace std;

class BigObj {
    private:
        int id;

    public:
        BigObj(int c_id) :id{c_id} {}

        ~BigObj() {
            cout << "Destroying" << endl;
        }

        int get_id() { return id; }
};

int main() {
    cout << "Create vector" << endl;
    vector<BigObj> v {};
    v.push_back({1});
    cout << endl;

    cout << "Reference, then pop" << endl;
    auto& bigObj = v[0];
    v.pop_back();

    cout << bigObj.get_id() << endl;
}

