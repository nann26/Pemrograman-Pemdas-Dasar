#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++) {
        cout << "Element at index " << i << ": " << array[i] << endl;
    }
    return 0;
}