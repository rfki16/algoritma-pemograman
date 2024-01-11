#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan Bilangan Maksimal : ";
    cin >> n;

    cout << "Bilangan Ganjil = ";
    for (int i=1; i<=n; i++){
        if (i%2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Bilangan Genap = ";
    for (int i=1; i<=n; i++){
        if(i%2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Bilangan Kelipatan 5 = ";
    for (int i=1; i<=n; i++){
        if(i%5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}