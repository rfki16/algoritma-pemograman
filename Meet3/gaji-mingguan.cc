#include <iostream>
using namespace std;

int main() {
    string nama_karyawan;
    char golongan;
    int jam_kerja, upah_perjam, lembur, upah_lembur, upah_total;

    cout << "Input nama karyawan : ";
    cin >> nama_karyawan;

    cout << "Input golongan (A-D) : ";
    cin >> golongan;

    cout << "Input total jumlah kerja + lembur : ";
    cin >> jam_kerja;

    switch (golongan)
    {
        case 'A':
            upah_perjam = 4000;
            break;
        case 'B':
            upah_perjam = 5000;
            break;
        case 'C':
            upah_perjam = 6000;
            break;
        case 'D':
            upah_perjam = 7000;
            break;
        default :
            upah_perjam = 0;
            cout << "Maaf golonngan yang anda input tidak terssedia" << endl;
            return 1;
    }

    // menentukan jumlah jam kerja lembur
    if (jam_kerja > 48){
        upah_lembur = (jam_kerja - 48) * 3000;
        jam_kerja = 48;
    }

    // menghitung total upah
    upah_total = (jam_kerja * upah_perjam) + upah_lembur;

    // output
    cout << "==============" << endl;
    cout << "Gaji Karyawan" << endl;
    cout << "==============" << endl;
    cout << "Nama Karyawan : " << nama_karyawan << endl;
    cout << "Total Gaji : " << upah_total << endl;

    return 0;
}

/*
Buatlah program C++ untuk menghitung upah mingguan karyawan. Masukan yang dibaca adalah nama karyawan, golongan, dan jumlah jam kerja. Keluaran program adalah nama karyawan dan upahnya.
Ketentuan :
jam kerja normal = 48 jam
upah per jam :
Golongan A : Rp. 4000
Golongan B : Rp. 5000
Golongan C : Rp. 6000
Golongan D : Rp. 7000
upah lembur : Rp.3000/jam

*/