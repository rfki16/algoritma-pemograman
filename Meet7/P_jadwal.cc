#include <iostream>
#include <string>
using namespace std;

void krsMahasiswa (string& semester, string& nama, string& nim, string& prodi)
{
    cout << "Lihat KRS" << endl;

    cout << "Masukkan Nama : ";
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    getline(cin, nim);

    cout << "Masukkan Prodi : ";
    getline(cin, prodi);

    cout << "Masukkan Semester : ";
    getline(cin, semester);

}

void opsikrsMahasiswa(int& pilmatkul)
{
    cout << "Pilih Mata Kuliah : " << endl;
    cout << "1. Algoritma dan Pemograman" << endl;
    cout << "2. Sistem Basis Data" << endl;
    cout << "3. Dasar Keamanan Komputer" << endl;
    cout << "Masukkan pilihan (1-3) : ";
    cin >> pilmatkul;

}


int main(){
    string nama, nim, prodi, semester;
    int pilmatkul;

    krsMahasiswa(nama, nim, prodi, semester);
    opsikrsMahasiswa(pilmatkul);
    
    cout << "==============" << endl;
    cout << "DATA KRS ANDA" << endl;
    cout << "==============" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "Prodi : " << prodi << endl;
    cout << "Semester : " << semester << endl;
    
    switch(pilmatkul) {
        case 1:
            cout << "Mata Kuliah : Algoritma dan Pemograman" << endl;
            cout << "SKS : 3" << endl;
            cout << "Waktu : Sabtu, 17.00 - 18.30" << endl;
            break;
        case 2:
            cout << "Mata Kuliah : Sistem Basis Data" << endl;
            cout << "SKS : 3" << endl;
            cout << "Waktu : Senin, 19.30 - 21.30" << endl;
            break;
        case 3:
            cout << "Mata Kuliah : Dasar Keamanan Komputer" << endl;
            cout << "SKS : 3" << endl;
            cout << "Waktu : Selasa, 19.30 - 21.30" << endl;
            break;
        default:
            cout << "Pilihan yang anda input, salah!" << endl;
    }
        
    return 0;
}
