#include <iostream>
using namespace std;

int main() {
  int tinggi;

  // Input tinggi segitiga dari pengguna
  cout << "Masukkan tinggi segitiga: ";
  cin >> tinggi;

  // Menampilkan segitiga siku-siku terbalik
  for (int i = tinggi; i >= 1; i--) {
    // Menampilkan asterisk
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }

    // Pindah ke baris baru setelah satu baris selesai
    cout << endl;
  }

  return 0;
}
