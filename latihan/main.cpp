#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "masukan nilai x" << endl;
    cin >> x;

    for (int i =0; i < x; i++)
    if (i % 2==0){
        cout << i << ".";
    }

    return 0;
}
