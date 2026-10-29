#include <iostream>
using namespace std;

int main() {
    int arrayData[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arrayData[i] << endl;
    }
    return 0;
}