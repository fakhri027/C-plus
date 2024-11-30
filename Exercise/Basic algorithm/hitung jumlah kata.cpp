#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  cout << "##  Program C++ Menghitung Jumlah Kata  ##" << endl;
  cout << "==========================================" << endl;
  cout << endl;
 
  string kalimat;
  int jumlahKata = 0;
 
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);
 
  for (int i = 0; i < kalimat.length(); i++) {
    // Periksa apakah karakter saat ini adalah spasi
    if (kalimat[i] == ' ') {
      jumlahKata++;
    }
  }
 
  // Tambah 1 karena kata terakhir tidak di hitung di dalam loop
  jumlahKata++;
 
  cout << "Jumlah kata dalam kalimat adalah: " << jumlahKata << endl;
 
  return 0;
}