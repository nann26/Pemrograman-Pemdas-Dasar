#include <iostream>
using namespace std;

struct Menu {
    int kode;
    int voucher;
    string nama;
    int harga;
};

struct Voucher {
    string kode;
    int diskon;
};

Menu daftarMenu[3] = {};

Voucher daftarVoucher[2] = {};

int kodeMenu[10];
int jumlahPesanan;
int diskon;
int totalBayar;
int saldoGoPay;
string voucher;

void iniData() {
    diskon = 0;
    totalBayar = 0;
    saldoGoPay = 0;
}


void tampilMenu() {
    cout << "===DAFTAR MENU===" << endl;
    cout << "1. Ayam Geprek  @ Rp10000" << endl;
    cout << "2. Nasi Goreng  @ Rp12000" << endl;
    cout << "3. Tahu Telur   @ Rp13000" << endl;
    cout << "===================" << endl;
}

int cekBesarDiskon(string voucher) {
    if (voucher == "PDTKOM5000") {
        return 5000;
    }
    else if (voucher == "PDTKOM3000") {
        return 3000;
    }
    else {
        return 0;
    }
}

int hitungTotalTransaksi() {
    int subtotal = 0;
    for(int i = 0; i < jumlahPesanan; i++){
        if(kodeMenu[i] == 1){
            subtotal += 10000;
        }
        else if(kodeMenu[i] == 2){
            subtotal += 12000;
        }
        else if(kodeMenu[i] == 3){
            subtotal += 13000;
        }
    }
    diskon = cekBesarDiskon(voucher);
    totalBayar = subtotal - diskon;
    return totalBayar;
}

void tampilTotalTransaksi() {
    cout << "=== RINCIAN PESANAN ===" << endl;

    for(int i = 0; i < jumlahPesanan; i++) {
        if(kodeMenu[i] == 1){
            cout << "- Ayam Geprek : Rp10000" << endl;
        }
        else if(kodeMenu[i] == 2){
            cout << "- Nasi Goreng : Rp12000" << endl;
        }
        else if(kodeMenu[i] == 3){
            cout << "- Tahu Telur : Rp13000" << endl;
        }
    }
    cout << "Diskon : Rp" << diskon << endl;
    cout << "Total Bayar : Rp" << totalBayar << endl;
}

void tampilSaldoGoPay() {
    if(saldoGoPay >= totalBayar) {
        cout << "SUKSES. SISA GOPAY : Rp" << saldoGoPay - totalBayar << endl;
    }
    else {
        cout << "GAGAL. SALDO TIDAK CUKUP!" << endl;
    }
}

void prosesInputTransaksi() {
    cout << "Saldo GoPay : ";
    cin >> saldoGoPay;
    cout << "Jumlah Pesanan : ";
    cin >> jumlahPesanan;

    while(jumlahPesanan < 1 || jumlahPesanan > 10){
        cout << "Jumlah pesanan maksimal 10!" << endl;
        cout << "Jumlah Pesanan : ";
        cin >> jumlahPesanan;
    }
    for(int i = 0; i < jumlahPesanan; i++){
        cout << "Kode Menu Pesanan Ke-" << i+1 << " : ";
        cin >> kodeMenu[i];
    }
    cout << "Kode Voucher : ";
    cin >> voucher;
}

int main() {
    iniData();
    tampilMenu();
    prosesInputTransaksi();
    hitungTotalTransaksi();
    tampilTotalTransaksi();
    tampilSaldoGoPay();

    return 0;
}
