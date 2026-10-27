#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "masukan nilai a = " << endl;
    cin >> a;
    cout << "masukan nilai b = " << endl;
    cin >> b;

    cout << "hasil pembagian" << fixed << setprecision(2) << (float)a/b << endl;
    string status = (a % b == 0)? "hasil dibagi" : "tidak habis dibagi";
    cout << "status =" << status << endl;

    return 0;
}
