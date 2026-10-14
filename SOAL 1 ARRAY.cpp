    #include <iostream>
    using namespace std;

    template <typename T, int N>
    int length(T (&)[N]) {
        return N;
    }

    int main() {
        int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
        int B[2][3] = {{6, 5, 4}, {3, 2, 1}};
        int jumlah[2][3];
        int kurang[2][3];
        int i, j;

        int baris = length(A);
        int kolom = length(A[0]);

        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                jumlah[i][j] = A[i][j] + B[i][j];
                kurang[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "Matriks A" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "Matriks B" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                cout << B[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "Hasil A + B" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                cout << jumlah[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "Hasil A - B" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                cout << kurang[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;
    }