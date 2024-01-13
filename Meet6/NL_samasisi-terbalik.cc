#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    for (int i=tinggi; i>=1; i--){
        for (int j=1; j<=tinggi; j++){
            cout << " ";
        }

        for (int k=1; k<=i; k++){
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}