#include <iostream>
using namespace std;

int main(void) {
    string nama;
    string nim;
    string namaBenar = "Ananda";
    string nimBenar = "5000";

    cout << "masukan nama = ";
    cin >> nama;
    cout << "masukan nim = ";
    cin >> nim;

    if (nama != namaBenar){
        cout << "nama salah kosyak" << endl;
    } else if (nim != nimBenar){
        cout << "nim salah kosyak" << endl;
    }else {
        cout << "nama = " << nama << endl;
        cout << "nim = " << nim << endl;
    }

    return 0;
}
