#include <iostream>
using namespace std;

void showMenu() {
    cout << "PROGAM KALKULATOR SEDERHANA\n";
    cout << "a. Penjumlahan\n";
    cout << "b. Pengurangan\n";
    cout << "c. Perkalian\n";
    cout << "d. Pembagian\n";
}

int main() {

    char str;
    int nilai1, nilai2;

    showMenu();

    cout << "Masukkan Pilihan Anda : ";
    cin >> str;

    cout << "Masukkan Nilai 1 : ";
    cin >> nilai1;

    cout << "Masukkan Nilai 2 : ";
    cin >>  nilai2;

    if (str=='a' || str=='A') {
        cout << "Hasil penjumlahan angka = " << nilai1 + nilai2 << endl;
    }
    else if (str=='b' || str=='B') {
        cout << "Hasil pengurangan angka = " << nilai1 - nilai2 << endl;
    }
    else if (str=='c' || str=='C') {
        cout << "Hasil perkalian angka = " << nilai1 * nilai2 << endl;
    }
    else if (str=='d' || str=='D') {
    cout << "Hasil pembagian angka = " << nilai1 / nilai2 << endl;
    }

    return 0;
}