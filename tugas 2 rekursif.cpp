#include <iostream>
using namespace std;

void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari " << asal << " ke " << tujuan << endl;
        return;
    }

    hanoi(n - 1, asal, bantu, tujuan);
    cout << "Pindahkan cakram " << n << " dari " << asal << " ke " << tujuan << endl;
    hanoi(n - 1, bantu, tujuan, asal);
}

int main(){
    int n;
    cout << "Masukkan jumlah cakram: ";
    cin >> n;

    if (n < 1) {
        cout << "Input tidak valid. Masukkan jumlah cakram minimal 1" << endl;
    }
    else {
        hanoi(n, 'A', 'C', 'B');
    }
    return 0;
}