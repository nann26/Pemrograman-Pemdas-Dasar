#include <iostream>

using namespace std;

int main()
{
    double nilai;
    double total = 0;
    int data = 0;
    char lanjut;

    do{
        cout << "apakah ada data baru? (y/n) " << endl;
        cin >> lanjut;
        if (lanjut == 'y'){
            double nilai;
            cout << "input data = ";
            cin >> nilai;
            total += nilai;
            data++;
        }
    } while (lanjut == 'y');

    cout << "Total bilangan: " << total << endl;
    cout << "Jumlah bilangan: " << data << endl;

    if (data > 0) {
        cout << "Rata-rata bilangan: " << (total / data) << endl;
    } else {
        cout << "Tidak ada data yang dimasukkan." << endl;
    }
    return 0;
}
