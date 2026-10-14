#include <iostream>
using namespace std;

int main() {
    int i;
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int panjang1 = sizeof(arr1) / sizeof(arr1[0]);
    int panjang2 = sizeof(arr2) / sizeof(arr2[0]);

    int hasil[panjang1 + panjang2];

    for (i = 0; i < panjang1; i++) {
        hasil[i] = arr1[i];
    }
    for (i = 0; i < panjang2; i++) {
        hasil[panjang1 + i] = arr2[i];
    }
    cout << "Array 1 : ";
    for (i = 0; i < panjang1; i++) {
        cout << arr1[i] << " ";
    }
    cout << "Array 2 : ";
    for (i = 0; i < panjang2; i++) {
        cout << arr2[i] << " ";
    }
    cout << "Gabungan: ";
    for (i = 0; i < panjang1 + panjang2; i++) {
        cout << hasil[i] << " ";
    }
    cout << endl;

    return 0;
}