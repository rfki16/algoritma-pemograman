#include <iostream>
using namespace std;

int main() {
    float uts,uas,tugas;
    string nilai;

    cout << "PENDATAAN NILAI MAHASISWA" << endl;

    cout << "Masukkan nilai UTS : ";
    cin >> uts;

    cout << "Masukkan nilai UAS : ";
    cin >> uas;

    cout << "Masukkan nilai Tugas : ";
    cin >> tugas;

    if (uts == 0 || uas == 0) {
        nilai = "E";
        cout << "Salah satu nilai ada yang bernilai 0" << endl;
    } 
    else 
    {
        float nilaiAkhir = (uts*0.3) + (uas*0.4) + (tugas*0.3);

        if (nilaiAkhir >= 85)
        {
            nilai = "A";
        }
        else if (nilaiAkhir >= 70)
        {
            nilai = "B";
        }
        else if (nilaiAkhir >= 60)
        {
            nilai = "C";
        }
        else if (nilaiAkhir >= 50)
        {
            nilai = "D";
        }
        else 
        {
            nilai = "E";
        }
    }

    cout << "Nilai Akhir : " << nilai << endl;

    return 0;
}