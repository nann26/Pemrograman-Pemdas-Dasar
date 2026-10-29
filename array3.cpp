#include <iostream>
using namespace std;

int main(){
    int array[]= {10, 20, 30, 40, 50};
    int length = sizeof(array)/sizeof(array[0]);
    int total = 0;

    for (int i = 0; i < length; i++) {
        total += array[i];
    }
    cout << "Total: " << total << endl;
    return 0;
}