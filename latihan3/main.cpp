#include <iostream>

using namespace std;

int main()
{
    int suhu;
    int pilihan;

    cout << "=== MENU KONVERSI SUHU===" << endl;
    cout << "1.Reamur (R = 0.8 * C)" << endl;
    cout << "2.Fahrenheit (F = (1.8 * C) + 32)" << endl;
    cout << "3.Kelvin (K = C + 273.15)" << endl;
    cout << "pilihan menu = ";
    cin >> pilihan;

    bool tidakValid = (suhu < -273.15 || pilihan < 1 || pilihan > 3);
    bool isValid = !(suhu < -273.15 || pilihan < 1 || pilihan > 3);

    cin >> pilihan;
    switch (pilihan) {
    case 1:
    cout << "jenis suhu = Reamur" << endl;
    cout << "masukan suhu (celcius) = ";
    cin >> suhu;
    cout << "Hasil konversi = " << 0.8 * suhu << endl;
    break;
    case 2:
    cout << "jenis suhu = Fahrenheit" << endl;
    cout << "masukan suhu (celcius) = ";
    cin >> suhu;
    cout << "hasil konversi = " << (1.8 * suhu) + 32 << endl;
    break;
    case 3:
    cout << "jenis suhu = kelvin" << endl;
    cout << "masukan suhu (celcius) = ";
    cin >> suhu;
    cout << "hasil konversi = " << suhu + 273.15 << endl;
    break;
    default:
        cout << "gamasuk apa apa lol" << endl;

    }


    bool skala1 (-273.15 || pilihan < 1 || pilihan > 3);
    bool skala2 (-273.15 || pilihan < 1 || pilihan > 3);
    bool skala3 (-273.15 && pilihan >= 1 && pilihan <= 3);

    return 0;
}
