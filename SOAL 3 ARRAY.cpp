#include <iostream>
using namespace std;

int main() {
    int i, j, temp;
    int data[] = {20, 2, -2, 14, 6, 0};
    int panjang = sizeof(data) / sizeof(data[0]);

    cout << "Sebelum diurutkan" << endl;
    for (i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    for (i = 0; i < panjang - 1; i++) {
        for (j = 0; j < panjang - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    cout << "Sesudah diurutkan" << endl;
    for (i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}