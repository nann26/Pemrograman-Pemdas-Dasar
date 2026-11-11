#include <iostream>
#include <string>
using namespace std;

char hurufKecil(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isPalindrome(string s) {
    if (s.length() <= 1) {
        return true;
    }if (hurufKecil(s[0]) != hurufKecil(s[s.length() - 1])) {
        return false;
    }
    return isPalindrome(s.substr(1, s.length() - 2));
}

int main(){
    string input;
    cout << "String input: ";
    getline(cin, input);

    cout << "Palindrome: ";
    if (isPalindrome(input)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}