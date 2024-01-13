#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i,j, maxIndex, temp;
    for (i=0; i<n-1; i++) {
        maxIndex = i;
        for(j=i+1; j<n;j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n,i;

    cout << "Masukkan jumlah elemen : ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen : ";
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr,n);
    cout << "Data setelah diurutkan : ";
    for (i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}