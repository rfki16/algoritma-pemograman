#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Masukkan nilai N = ";
    cin >> n;
    cout << endl;

    cout << "Tampilkan Hello World" << endl;
    for (int i = 0; i<=10; i++){
        cout << "Hello World" << endl;
    }
    cout << endl;

    cout << "Perulangan Bilangan Ganjil-n : ";
    for (int i; i<=n; i++){
        if(i%2 != 0){
            cout << i << " ";
        }
    }

    return 0;
}