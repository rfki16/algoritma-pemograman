#include <iostream>
#include <cmath>
using namespace std;

bool prima(int angka) {
  //angka tidak boleh 0 atau kurang dari 0 
  if (angka <=1 ) {
      return false;
  }

  // perulangan 
  for (int i = 2; i<=angka/2; i++){
      if (angka%i == 0){
          return false;
      }
  }

  return true;
}


int main () {
  // bilangan yang ditentukan
  int start = 1;
  int end = 20;

  cout << "Bilangan prima antara" << start << "dan" << end << " adalah" << endl;
  for (int i= start; i<=end; ++i){
    if (prima(i)){
      cout << i << " ";
    }
  }

  return 0;
}

/*
Pseudocode 
1. start
2. buat validasi angka yang diinput tidak boleh 1 atau kurang dari 1
3. buat looping untuk menentukan bilangan prima dengan cara bilangan tersebut jika dibagi 2 tidak boleh habis
4. jika bilangan habis dibagi 2 = 0 maka bukan prima
5. jika tidak maka itu adalah bilangan prima
6. membuat rentang bilangan yang kita input
7. buat perulangan untuk menampilkan rentang bilangan yang kita input
8. jika bilangan tersebut sesuai dengan function prima yang kita buat maka tampilkan
9. end
*/