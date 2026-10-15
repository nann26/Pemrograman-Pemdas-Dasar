#include <iostream>
using namespace std;

float cTof(float c) {
    return (9.0f * c / 5.0f) + 32.0f;
}

int main() {
    float celsius;
    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;

    float fahrenheit = cTof(celsius);
    cout << celsius << " derajat Celsius = " << fahrenheit << " derajat Fahrenheit" << endl;

    return 0;
}   