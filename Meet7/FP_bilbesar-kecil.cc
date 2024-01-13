#include <iostream>
#include <vector>
using namespace std;

// function bilangan besar
int bilBesar(const vector<int>& bilangan) {
    if (bilangan.empty()) {
        cout << "Data kosong, tidak ada bilangan terbesar" << endl;
        return 0;
    }

    int terbesar = bilangan[0];

    for (int i=1; i<bilangan.size(); i++){
        if (bilangan[i] > terbesar) {
            terbesar = bilangan[i];
        }
    }

    return terbesar;
}

// function bilangan kecil
int bilKecil (const vector<int>& bilangan) {
    if (bilangan.empty()) {
        cout << "Data kosong, tidak ada bilangan terkecil" << endl;
        return 0;
    }

    int terkecil = bilangan[0];

    for(int i=1; i<bilangan.size(); i++) {
        if (bilangan[i] < terkecil) {
            terkecil = bilangan[i];
        }
    }
    return terkecil;
}


// prosedur bilangan besar
void bilTerbesar(const vector<int>& bilangan) {
    if (bilangan.empty()) {
        cout << "Data kosong, tidak ada bilangan terbesar" << endl;
    }

    int terbesar = bilangan[0];

    for (int i=1; i<bilangan.size(); i++) {
        if (bilangan[i] > terbesar) {
            terbesar = bilangan[i];
        }
    }
    cout << "Bilangan Terbesar (Prosedure) : " << terbesar << endl;
}

// prosedur bilangan kecil
void bilTerkecil (const vector<int>& bilangan) {
    if (bilangan.empty()) {
        cout << "Data kosong, tidak ada bilangan terkecil" << endl;
    }

    int terkecil = bilangan[0];

    for (int i=1; i<bilangan.size(); i++){
        if (bilangan[i] < terkecil) {
            terkecil = bilangan[i];
        }
    }
    cout << "Bilangan Terkecil (Prosedure) : " << terkecil << endl;
}


int main() {

    vector<int> bilangan = {20,31,72,81,45};

    // call function
    int functionBesar = bilBesar(bilangan);
    int functionKecil = bilKecil(bilangan);

    // call prosedure
    bilTerbesar(bilangan);
    bilTerkecil(bilangan);

    // output function
    cout << "Bilangan Terbesar (Function) : " << functionBesar << endl;
    cout << "Bilangan Terkecil (Function) : " << functionKecil << endl;



    return 0;
}