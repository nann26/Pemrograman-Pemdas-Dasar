#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int jumlahMotor = 0, jumlahMobil = 0;
    int totalParkirMotor = 0, totalParkirMobil = 0;
    int totalJamMotor = 0, totalJamMobil = 0;
    int maxJamMotor = 0, maxBiayaMotor = 0;
    int maxJamMobil = 0, maxBiayaMobil = 0;
    int jenisKendaraan = 0;

    do {
        cout << "Masukkan jenis kendaraan (1=motor, 2=mobil, 0=Keluar): ";
        cin >> jenisKendaraan;
        if (jenisKendaraan == 0) {
            break;
        }
        else if (jenisKendaraan != 1 && jenisKendaraan != 2) {
            cout << "Jenis kendaraan salah. Ulangi kembali" << endl;
            continue;
        }
        int jam = 0;
        cout << "Masukkan lama parkir (dalam jam): ";
        cin >> jam;

        if (jam <= 0) {
            cout << "Lama parkir tidak valid!\n\n";
            continue;
        }
        int isCivitas = 0;
        cout << "Apakah Civitas Akademika? (1=Ya, 0=Tidak): ";
        cin >> isCivitas;

        int tarifDasar = 0, tarifLanjut = 0;
        string kendaraan = "";
        int jumlah = 0;

        switch (jenisKendaraan) {
            case 1:
                jumlahMotor++;
                kendaraan = "motor";
                jumlah = jumlahMotor;
                tarifDasar = 2000;
                tarifLanjut = 1000;
                break;
            case 2:
                jumlahMobil++;
                kendaraan = "mobil";
                jumlah = jumlahMobil;
                tarifDasar = 5000;
                tarifLanjut = 2000;
                break;
        }
        int tarif = 0;
        if (jam == 1) {
            tarif = tarifDasar;
        } else {
            tarif = tarifDasar + ((jam - 1) * tarifLanjut);
        }
        if (jam > 24) {
            tarif += 50000;
        }
        if (isCivitas == 1) {
            tarif -= 2000;
            if (tarif < 0) tarif = 0;
        }
        if (jenisKendaraan == 1) {
            totalParkirMotor += tarif;
            totalJamMotor += jam;

            if (jam > maxJamMotor) {
                maxJamMotor = jam;
                maxBiayaMotor = tarif;
            }
        } else {
            totalParkirMobil += tarif;
            totalJamMobil += jam;

            if (jam > maxJamMobil) {
                maxJamMobil = jam;
                maxBiayaMobil = tarif;
            }
        }

        cout << "Total biaya parkir " << kendaraan << "-" << jumlah << " = " << tarif << endl;

    } while (jenisKendaraan != 0);
    cout << "========== RINGKASAN PARKIR ==========" << endl;
    cout << "Jumlah motor = " << jumlahMotor << endl;
    cout << "Total biaya parkir motor = " << totalParkirMotor << endl;
    cout << "Jumlah mobil = " << jumlahMobil << endl;
    cout << "Total biaya parkir mobil = " << totalParkirMobil << endl;
    cout << fixed << setprecision(2);
    if (jumlahMotor > 0) {
        double avgMotor = (double) totalJamMotor / jumlahMotor;
        cout << "Rata-rata lama parkir motor = " << avgMotor << " jam " << endl;
    }
    if (jumlahMobil > 0) {
        double avgMobil = (double) totalJamMobil / jumlahMobil;
        cout << "Rata-rata lama parkir mobil = " << avgMobil << " jam " << endl;
    }
    if (jumlahMotor > 0) {
        cout << "Parkir motor paling lama = " << maxJamMotor << " jam dengan biaya parkir = " << maxBiayaMotor << endl;
    }
    if (jumlahMobil > 0) {
        cout << "Parkir mobil paling lama = " << maxJamMobil << " jam dengan biaya parkir = " << maxBiayaMobil << endl;
    }

    return 0;
}
