#include <iostream>
using namespace std;

int main() {
    string nama_karyawan;
    char golongan;
    int jam_kerja, upah_perjam, upah_lembur, upah_total;

    cout << "Masukkan nama karyawan : ";
    cin >> nama_karyawan;
    
    cout << "Masukkan golongan anda (A-D) : ";
    cin >> golongan;

    cout << "Masukkan total jumlah jam kerja : ";
    cin >> jam_kerja;

    switch(golongan)
    {
        case 'A':
            upah_perjam = 40000;
            break;
        case 'B':
            upah_perjam = 50000;
            break;
        case 'C':
            upah_perjam = 60000;
            break;
        case 'D':
            upah_perjam = 70000;
            break;
        default :
            upah_perjam = 0;
            cout << "Maaf golongan yang anda input tidak ada" << endl;
            return 1;
    }

    // hitung upah lembur
    if (jam_kerja > 10) {
        upah_lembur = (jam_kerja - 10)*25000;
        jam_kerja = 10;
    }

    // total upah bulanan
    upah_total = (jam_kerja * upah_perjam) + upah_lembur;

    cout << "=============" << endl;
    cout << "Gaji Karyawan" << endl;
    cout << "=============" << endl;
    cout << "Nama Karyawan : " << nama_karyawan << endl;
    cout << "Total Gaji : " << upah_total << endl;

    return 0;
}