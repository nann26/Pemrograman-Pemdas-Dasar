// Nama: Ananda Riezky Maddina
// NIM: 265150307111072
// Kelas: F
// Nomor Kasus: 2

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float berat;
    float tinggi;
    float imt;
    string kriteria;

    for (int i =0; i < 2; i++){
    cout << "masukan berat badan (kg) : " << endl;
    cin >> berat;
    cout << "masukan tinggi badan (m) : " << endl;
    cin >> tinggi;


    imt = berat/ (tinggi * tinggi);

    if (imt <= 18.5){
        kriteria = "kurus";
    } else if (imt <= 25){
        kriteria = "normal";
    } else if (imt <= 30){
        kriteria = "gemuk";
    } else{
        kriteria = "obesitas";
    }

    cout << setprecision(4) << imt << endl;
    cout << "berat badan (kg) = " << berat << endl;
    cout << "tinggi badan (m) = " << tinggi << endl;
    cout << "IMT = " << imt << endl;
    cout << "kriteria = " << kriteria << endl;
    }
    return 0;
}
