#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    int A[n] = {3,4,5,6};
    int B[n];

    // jika ingin array b bisa diinput nilainya
    cout << "Masukkan elemen array B : \n";
    for (int i=0; i<n; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }
    cout << endl;

    // menampilkan array A
    cout << "Array A : ";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    // menampilkan array B
    cout << "Array B : ";
    for (int i=0; i<n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    // menjumlahkan array A + B
    cout << "Hasil penjumlahan A + B : ";
    for (int i=0; i<n; i++) {
        cout << A[i] + B[i] << " ";
    }
    cout << endl;

}