#include <iostream>
using namespace std;


int main() {
    // array matriks A 2x2
    int A[2][2] = {{1,2},{3,4}};

    // transpose matriks B 2x2
    int B[2][2];
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            B[i][j] = A[j][i];
        }
    }

    // matriks A
    cout << "Matriks A" << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // matriks B transpose dari A
    cout << "Matriks B (Transpose dari A)" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // menjumlahkan matriks A + B
    int hasil[2][2];
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            hasil[i][j] = A[i][j] + B[i][j];
        }
    }

    // tampilkan hasil penjumlahan matriks A + B
    cout << "Hasil penjumlahan Matriks A dan B" << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << hasil[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}
