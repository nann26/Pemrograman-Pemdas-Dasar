#include <iostream>
using namespace std;    

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f =f * i;
    }
    return f;
}

int kombinasi(int n, int k) {
    if (k > n || n < 0 || k < 0) {
        return 0;
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai k: ";
    cin >> k;
    cout << "nilai" << n << " = "  << factorial(n)<< endl;
    cout << "Kombinasi " << n << " dan " << k << " = " << kombinasi(n, k) << endl;

    return 0;
}
    