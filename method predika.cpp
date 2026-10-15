#include <iostream>
using namespace std;

bool hasZeroRemainder(int a, int b) {
    return (a % b == 0);
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (hasZeroRemainder(i, 7)) {
            cout << i << " habis dibagi 7" << endl;
        } else {
            cout << i << " tidak habis dibagi 7" << endl;
        }
    }
    return 0;
}