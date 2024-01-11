#include <iostream>
using namespace std;

int main() {
    int matriksA[] = {3,4,6,2};
    int matriksB[4];
    int hasil[4];

    // tampilkan matriks A
    cout << "Matriks A : ";
    for (int i=0; i<4; i++){
        cout << matriksA[i] << " ";
    }
    cout << endl;

    // input nilai matriks B
    cout << "Masukkan nilai matriks B (4 angka dipisah dengan spasi) : ";
    for (int i=0; i<4; i++){
        cin >> matriksB[i];
    }

    // penjumlahan
    for (int i=0; i<4; i++){
        hasil[i] = matriksA[i] + matriksB[i];
    }

    // menampilkan output 
    cout << "Hasil penjumlahan matriks A + B : ";
    for (int i=0; i<4; i++){
        cout << hasil[i] << " ";
    }

    return 0;
}