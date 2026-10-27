#include <iostream>

using namespace std;

int main()
{
    double durasiJam;


    cout << "masukan durasi parkir = " << endl;
    cin >> durasiJam;

    if (durasiJam <= 0){
        cout << "input durasi tidak valid" << endl;
    }
    else if (durasiJam <= 1){
        double tarif = 3000;
        cout << "tarif parkir = Rp " << tarif << endl;
    }
    else{
        double tarif = 3000 + (durasiJam - 1.0) * 1000;
        cout << "tarif parkir = Rp " << tarif << endl;

    }

    return 0;
}
