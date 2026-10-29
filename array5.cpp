#include <iostream>
using namespace std;

int main() {
    char bali[]= "bali";
    int length = sizeof(bali)/sizeof(bali[0]);
    for (int i = 0; i < length; i++) {
        cout << "Element at index " << i << ": " << bali[i] << endl;
    }
    return 0;
}