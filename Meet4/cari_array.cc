#include <iostream>
using namespace std;

int indeks(int arr[], int length, int search) {
    for (int i=0; i<length; i++) {
        if (arr[i] == search) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int length = 4;
    int arr[length] = {12,7,9,3};
    int search;

    cout << "Array" << endl;
    for (int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Input nilai yang ingin dicari : ";
    cin >> search;

    int arrayIndeks = indeks(arr,length,search);

    if (arrayIndeks != -1) {
        cout << "Nilai" << search << " ditemukan pada indeks " << arrayIndeks << endl;
    }
    else {
        cout << "Nilai" << search << " tidak ditemukan dalam array" << endl;
    }

    return 0;
}