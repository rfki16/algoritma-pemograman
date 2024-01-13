#include <iostream>
using namespace std;

// function
float luasTrapesium (int a, int b, int tinggi){
    float hasil;
    hasil = 0.5*(a+b)*tinggi;
    return (hasil);
}

void luasTP (int a, int b, int tinggi) {
    float hasil = 0.5*(a+b)*tinggi;
    cout << "Luas Trapesium (Procedure) : " << hasil;
}


int main() {

    // call function
    int hasil = luasTrapesium(5,5,2);
    cout << "Luas Trapesium (Function) : " << hasil << endl;

    // call procedure
    luasTP(5,5,2);

    


    return 0;
}