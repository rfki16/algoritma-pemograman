#include <iostream>
using namespace std;

int main() {
  string nama_karyawan;
  char golongan;
  int jam_kerja_bulanan, hari_lembur_bulanan, upah_per_jam, gaji_mingguan, gaji_bulanan;

  cout << "Masukkan nama karyawan : ";
  cin >> nama_karyawan;

  cout << "Masukkan golongan karyawan (A/B/C/D): ";
  cin >> golongan;

  switch (golongan) {
    case 'A':
        upah_per_jam = 100000;
        break;
    case 'B':
        upah_per_jam = 80000;
        break;
    case 'C':
        upah_per_jam = 60000;
        break;
    case 'D':
        upah_per_jam = 40000;
        break;
    default:
        cout << "Golongan tidak valid!" << endl;
        return 1;
  }

  cout << "Masukkan jumlah jam kerja dalam satu bulan: ";
  cin >> jam_kerja_bulanan;

  cout << "Masukkan jumlah hari lembur dalam satu bulan: ";
  cin >> hari_lembur_bulanan;

  gaji_mingguan = (jam_kerja_bulanan / 4) * upah_per_jam;

  if (hari_lembur_bulanan > 0) {
      gaji_mingguan += (hari_lembur_bulanan * 100000);
  }

  gaji_bulanan = jam_kerja_bulanan * upah_per_jam + (hari_lembur_bulanan * 100000) ;

  cout << "=============================" << endl;
  cout << "Nama Karyawan : " << nama_karyawan << endl;
  cout << "Lemburan / 100k : " << hari_lembur_bulanan * 100000 << endl;
  cout << "=============================" << endl;
  cout << "Total Gaji (include lemburan)" << endl;
  cout << "Gaji mingguan: Rp." << gaji_mingguan << endl;
  cout << "Gaji bulanan: Rp." << gaji_bulanan << endl;

  return 0;
}
