#include <iostream>


int data[10];
int n;

void tampil() {
    for (int i=0; i<n; i++) {
        std::cout << "[" << data[i] << "]";
    }
    std::cout << std::endl;

}


int main() {

    std::cout << "ALGORITMA BUBBLE SORT" << std::endl;
    std::cout << "======================" << std::endl;

    std::cout << "Masukkan jumlah data : ";
    std::cin >> n;
    std::cout << std::endl;

    // input data
    for (int i=0; i<n; i++) {
        std::cout << "Masukkan data ke-" << i+1 << "= ";
        std::cin >> data[i];
    }

    std::cout << std::endl;
    std::cout << "Proses Bubble Sort" << std::endl;
    tampil();

    // SORTING
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i; j++) {
            if(data[j] < data[j+1]) {
                int t;
                t = data[j+1];
                data[j+1] = data[j];
                data[j] = t;
            }
        }
        tampil();
    }
    std::cout << std::endl;


    return 0;
}