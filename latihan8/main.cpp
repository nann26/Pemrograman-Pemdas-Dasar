#include <iostream>

using namespace std;

int main()
{
    int pilihanMenu;
    int porsi;


    cout << "===Daftar Menu===" << endl;
    cout << "1. Nasi Goreng -Rp 15.000 " << endl;
    cout << "2. Mie Ayam -Rp 12.000 " << endl;
    cout << "3. Es Teh Manis -Rp 5.000" << endl;
    cout << "Pilih menu (1-3) = ";
    cin >> pilihanMenu;

    switch (pilihanMenu) {
    case 1:
        cout << "Masukan porsi = ";
        cin >> porsi;
        cout << "Total = " << porsi * 15000 << endl;
        break;
    case 2:
        cout << "Masukan porsi = ";
        cin >> porsi;
        cout << "Total = " << porsi * 12000 << endl;
        break;
    case 3:
        cout << "Masukan porsi = ";
        cin >> porsi;
        cout << "Total = " << porsi * 5000 << endl;
        break;
    default:
        cout << "Pilihan menu tidak valid!";
    }



    return 0;
}
