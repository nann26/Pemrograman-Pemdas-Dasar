#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char pilihan;
    string nama;
    double totalBelanja = 0;
    double totalBayar = 0;
    double diskon = 0;
    double potongan = 20000;

    cout << "=== MINI MARKET UTAMA===" << endl;
    cout << "Masukan Nama Pembeli = " ;
    cin >> nama;
    cout << "Masukan Kode Member (A/B/C) = ";
    cin >> pilihan;
    cout << "Masukan Total Belanja = "  ;
    cin >> totalBelanja;
    cout << fixed << setprecision(2);

    switch (pilihan){
    case 'A':
        diskon = totalBelanja * 0.15;
        break;
    case 'B':
        diskon = totalBelanja * 0.10;
        break;
    case 'C':
        diskon = 0;
        break;
    default:
        cout << "miskin" << endl;
    }

    cout << "=========================" << endl;
    cout << "Nama Pembeli = " << nama << endl;
    cout << "Total Awal = Rp " << totalBelanja << endl;

    if (totalBelanja >= 500000){
        potongan = 20000;
    }else{
        potongan = 0;
    }

    totalBayar = totalBelanja - diskon - potongan;
    cout << fixed << setprecision(2);

    cout << "Diskon Member = " << diskon << endl;
    cout << "Potongan ekstra = " << potongan << endl;
    cout << "--------------------"<< endl;
    cout << "Total Bayar = " << totalBayar << endl;

    return 0;
}
