
/*
 * See also p. 166
 * https://stackoverflow.com/questions/55692113/is-an-lvalue-reference-returned-from-a-function-actually-an-rvalue-from-the-per
 *
 */

int goo() {
    return 5;
}

int main() {
    int i = 5;
    int* ip = &i;

    int* g = &goo(); // Not identifiable, will throw compiler error
}

