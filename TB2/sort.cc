#include <iostream>

using namespace std;

int main() {
  const int MAX_SIZE = 100;

  int arr[MAX_SIZE];
  int n;

  // Input jumlah elemen array
  cout << "input jumlah elemen array: ";
  cin >> n;
  cout << "input 5 angka (dipisah dengan enter): " << endl;

  // Input Data
  for (int i = 0; i < n; i++) {
    do { 
        cout << "Angka Ke-" << i + 1 << " = ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) 
        {
          cout << "Maaf, input harus bilangan ganjil." << endl;
        }
    } while (arr[i] % 2 == 0);
  }


  // Algoritma Bubble Sort
  for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
          // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar
          if (arr[j] > arr[j + 1]) {
              swap(arr[j], arr[j + 1]);
          }
      }
  }

  // Menampilkan array yang telah diurutkan
  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }

  return 0;
}
