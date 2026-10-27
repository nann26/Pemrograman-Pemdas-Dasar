#include <iostream>

using namespace std;

int main()
{
    double durasi;
    double tarif = 0;

    cout << "Masukan durasi jam = ";
    cin >> durasi;

    if (durasi <= 0){
        cout << "Durasi tidak valid!";
    }else{
        if(durasi <= 2.0){
            tarif = 2000;
        } else{
            tarif = 2000 + (durasi - 2)* 1500;
        }
        cout << "Total Tarif Parkir = " << tarif << endl;
    }

    return 0;
}
