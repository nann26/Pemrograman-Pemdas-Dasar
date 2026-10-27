#include <iostream>

using namespace std;

int main()
{
    double jamKerja;
    double upah = 5000;
    double lembur = 0;
    double denda = 0;
    double total = 0;

    cout << "Masukan jam kerja = ";
    cin >> jamKerja;

    if (jamKerja >= 50 && jamKerja <= 60){
        upah = jamKerja * 5000;
    }else if (jamKerja > 60){
        upah = 60 * 5000;
        lembur = (jamKerja - 60) * 6000;
    }else{
        upah = jamKerja * 5000;
        denda = (50 - jamKerja) * 1000;
    }
    total = upah + lembur - denda;
    cout << "Upah = Rp. " << upah << endl;
    cout << "Lembur = Rp. " << lembur << endl;
    cout << "Denda = Rp. " << denda << endl;
    cout << "Total = Rp. " << total << endl;




    return 0;
}
