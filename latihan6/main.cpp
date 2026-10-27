#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string nama;
    double tugas;
    double uts;
    double uas;
    double nilaiAkhir;

    cout << "Masukan nama mahasiswa = " << endl;
    cin >> nama;
    cout << "Masukan nilai tugas = " << endl;
    cin >> tugas;
    cout << "Masukan nilai uts = " << endl;
    cin >> uts;
    cout << "Masukan nilai uas = " << endl;
    cin >> uas;
    nilaiAkhir = (0.20 * tugas) + (0.30 * uts) + (0.50 * uas);
    cout << fixed << setprecision(2) << endl;

    cout << "=== LAPORAN HASIL BELAJAR===" << endl;
    cout << "Nama Mahasiswa = " << nama << endl;
    cout << "Nilai Akhir = " << nilaiAkhir << endl;

    if (nilaiAkhir >= 60.00){
        cout << "STATUS = " << "LULUS" << endl;
    }else{bis
        cout << "STATUS = " <<"TIDAK LULUS" << endl;
    }



    return 0;
}
