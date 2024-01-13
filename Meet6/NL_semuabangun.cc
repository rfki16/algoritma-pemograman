#include <iostream>
using namespace std;

void segitigaSiku(int tinggi){
    for(int i=1; i<=tinggi; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void segitigaSisi(int tinggi){
    for(int i=1; i<=tinggi; i++){
        for(int j=tinggi; j>i; j--){
            cout << " ";
        }

        for (int k=1; k<=i*2-1; k++){
            cout << k;
        }
        cout << endl;
    }
}

void persegi(int sisi){
    for(int i=1; i<sisi; i++){
        for (int j=1; j<sisi; j++){
            cout << j << "  ";
        }
        cout << endl;
    }
}

int main() {

    // buat segigita siku 
    cout << "Segitiga siku 1 : \n";
    segitigaSiku(4);

    cout << "Segitiga siku 2 : \n";
    segitigaSiku(5);

    // segitiga sama sisi
    cout << "Segitiga sisi 1 : \n";
    segitigaSisi(4);

    cout << "Segitiga sisi 2 : \n";
    segitigaSisi(4);

    // persegi
    cout << "Persegi 1 : \n";
    persegi(4);

    cout << "Persegi 2 : \n";
    persegi(5);


    return 0;
}