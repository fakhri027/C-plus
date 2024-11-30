#include <iostream>
using namespace std;

/*
1. Jika angka adalah kelipatan 3, cetak "Fizz" sebagai penggantinya.
2. Jika angka adalah kelipatan 5, cetak "Buzz" sebagai penggantinya.
3. Jika angka adalah kelipatan 3 dan 5, cetak "FizzBuzz" sebagai penggantinya.
4. Jika angka bukan kelipatan 3 maupun 5, cetak angka tersebut.

*/
int main() {
  cout << "##  Program C++ Algoritma Fizz Buzz ##" << endl;
  cout << "======================================" << endl;
  cout << endl;
 
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "FizzBuzz" << endl;
    } 
    else if (i % 3 == 0) {
      cout << "Fizz" << endl;
    }
    else if (i % 5 == 0) {
      cout << "Buzz" << endl;
    } 
    else {
      cout << i << endl;
    }
  }
 
  return 0;
}