#include <iostream>
using namespace std;

int main() {
    string kota[3] = {"Bali", "Jakarta", "Bandung"};
    int size = sizeof(kota) / sizeof(kota[0]);
    cout << kota[0] << endl;

    return 0;
}