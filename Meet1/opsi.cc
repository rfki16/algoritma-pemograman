#include <iostream>
using namespace std;

void tampilMenu(){
  cout << "Pilihan Rute : \n";
  cout << "1. Jalan Umum\n";
  cout << "2. Underpass\n";
}


int main () {

  int pilihan;
  tampilMenu();
  cout << "Masukkan pilihan 1 atau 2 : ";
  cin >> pilihan;

    switch(pilihan) {
      case 1:
        cout << "Anda melewati jalan umum, Estimasi waktu tempuh anda menuju kampus adalah 20 menit" << endl;
        break;
      case 2:
        cout << "Anda melewati Underpass, Estimasi waktu tempuh anda menuju kampus adalah 15 menit" << endl; 
        break;
      default:
        cout << "Maaf pilihan tidak valid, silahkan pilih kembali.\n";
        break;
    }

  return 0;
}