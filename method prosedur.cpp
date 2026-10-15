#include <iostream>
using namespace std;

void add(int x, int y) {
    cout << "Hasil perkalian: " << (x * y) << endl;
}

int main() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    add(a, b);
    return 0;
}