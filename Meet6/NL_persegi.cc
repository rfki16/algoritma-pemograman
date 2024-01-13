#include <iostream>
using namespace std;

int main() {

    int sisi;

    cout << "Masukan jumlah sisi : ";
    cin >> sisi;

    for (int i=sisi; i>=1; i--){
        for (int j=1; j<=sisi; j++){
            cout << j << "  ";
        }
        cout << endl;
    }

    return 0;
}