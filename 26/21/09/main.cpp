#include <iostream>
#include <string>

using namespace std;

int main()
{
    //for:
    //for(var control; kondisi; press kontrol){
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //}

    for (int i =0; i < 68; i++){
        cout << i << ".";
        cout << "ini dio jawa" << endl;
    }


    //while
    //while (kondisi){
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //}

    int j = 1;
    while (j < 3){
        cout << j << ".";
        cout << "dio bukan jawa" << endl;
        j = j + 1;
        cout << "ulangi? (1: ya, lainnya: tidak): ";
        cin >> j;
    }

    //do while
    //do {
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //  perintah yang diulangi;
    //} while (kondisi);

    int k = 0;
    do{
        cout << k << ".";
        cout << "dio adalah jawa" << endl;
        k = k + 1;

    } while(k < 68);

    //break
    //continue

    int a = 0;
    while (a<10){
        cout << a << " ";
        if (a == 3){
            break;
        }
        cout << (a+1) << " ";
        cout << (a+2) << endl;
        a = a+1;
    }

    cout << "===================" << endl;

    int b = 0;
    while (b<10){
        cout << b << " ";
        if (b == 3){
            b = b+1;
            continue;
        }
        cout << (b+1) << " ";
        cout << (b+2) << endl;
        b = b+1;
    }
    return 0;
}
