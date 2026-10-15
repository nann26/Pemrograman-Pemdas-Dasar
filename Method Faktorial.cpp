#include <iostream>
using namespace std;

int faktorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int hasil;
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    hasil = faktorial(n);
    cout << "Faktorial dari " << n << " adalah " << hasil << endl;

    return 0;
}