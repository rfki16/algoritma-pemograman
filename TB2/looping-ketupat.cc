#include <iostream>
using namespace std;

int main() {
  int lebar;

  // Input lebar dari pengguna
  cout << "Masukkan lebar belah ketupat: ";
  cin >> lebar;

  // Menampilkan bagian atas belah ketupat
  for (int i = 1; i <= lebar; i++) {
      for (int j = 0; j < lebar - i; j++) {
          cout << " ";
      }

      for (int k = 1; k <= i; k++) {
          cout << "* ";
      }

      cout << endl;
  }

  // Menampilkan bagian bawah belah ketupat
  for (int i = lebar - 1; i >= 1; i--) {
      for (int j = 0; j < lebar - i; j++) {
          cout << " ";
      }

      for (int k = 1; k <= i; k++) {
          cout << "* ";
      }

      cout << endl;
  }

  return 0;
}
