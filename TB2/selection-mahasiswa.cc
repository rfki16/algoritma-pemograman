#include <iostream>
using namespace std;

int main() {
  float nilai;
  char nilai_huruf;

  cout << "Masukkan nilai mahasiswa: ";
  cin >> nilai;

  if (nilai > 100) {
    cout << "Nilai tidak valid! Masukkan nilai antara 0 hingga 100." << endl;
    return 1;
  }

  switch (static_cast<int>(nilai)) {
    case 70 ... 100:
      nilai_huruf = 'A';
      break;
    case 60 ... 69:
      nilai_huruf = 'B';
      break;
    case 40 ... 59:
      nilai_huruf = 'C';
      break;
    default:
      nilai_huruf = 'D';
      break;
  }

  cout <<" Nilai Huruf: " << nilai_huruf << endl;

  return 0;
}
