#include <iostream>
#include <string>
using namespace std;

struct MataKuliah {
    string id;
    string namaMK;
    float kuis[3];
};
struct Mahasiswa {
    string nama;
    int nim;
    MataKuliah mk;
};
float hitungRataKuis(MataKuliah mk) {
    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += mk.kuis[i];
    }
    return total / 3;
}
void cetakLaporan(Mahasiswa daftarMhs[], int jumlahMhs) {
    cout << "\n=== Laporan Data Nilai Mahasiswa ===" << endl;
    cout << "Mata Kuliah: " << daftarMhs[0].mk.namaMK
         << " (" << daftarMhs[0].mk.id << ")" << endl;
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < jumlahMhs; i++) {
        cout << i + 1 << ". Nama: " << daftarMhs[i].nama
             << " | NIM: " << daftarMhs[i].nim
             << " | Rata-rata Kuis: " << hitungRataKuis(daftarMhs[i].mk)
             << endl;
    }
    cout << "=====================================" << endl;
}

int main() {
    Mahasiswa daftarMhs[10]; 
    string kodeMK, namaMK;
    int jumlahMhs;
    cout << "=== Input Data Mata Kuliah ===" << endl;
    cout << "Kode MK: ";
    cin >> kodeMK;
    cout << "Nama MK: ";
    cin >> namaMK;

    cout << "\n=== Input Data Mahasiswa ===" << endl;
    do {
        cout << "Masukkan jumlah mahasiswa (1-10): ";
        cin >> jumlahMhs;
        if (jumlahMhs < 1 || jumlahMhs > 10) {
            cout << "Jumlah harus antara 1 sampai 10!" << endl;
        }
    } while (jumlahMhs < 1 || jumlahMhs > 10);

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "[Data Mahasiswa ke-" << i + 1 << "]" << endl;
        cout << "Nama: ";
        cin >> daftarMhs[i].nama;
        cout << "NIM: ";
        cin >> daftarMhs[i].nim;
        daftarMhs[i].mk.id = kodeMK;
        daftarMhs[i].mk.namaMK = namaMK;

        for (int j = 0; j < 3; j++) {
            cout << "Nilai Kuis " << j + 1 << ": ";
            cin >> daftarMhs[i].mk.kuis[j];
        }
    }
    cetakLaporan(daftarMhs, jumlahMhs);

    return 0;
}