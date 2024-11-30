#include <iostream>
 
using namespace std;

/*
Jika jam kerja karyawan lebih dari 48 jam per minggu maka akan mendapat uang lembur dengan perhitungan uang lembur = (jam kerja-48)*4000.
Jika jam kerja kurang dari 48 jam maka pegawai tidak akan mendapat uang lembur.
Perhitungan gaji pegawai adalah upah + uang lembur.
Input berupa nama karyawan, golongan dan jam kerja.
Outputnya adalah nama karyawan dan gaji yang diterima

Golongan = A maka upah per jam 5000
Golongan = B maka upah per jam 7000
Golongan = C maka upah per jam 8000
Golongan = D maka upah per jam 10000
*/
 
int main()
{
 cout << "##  Program Menghitung Gaji Karyawan  ##" << endl;
 cout << "========================================" << endl;
 cout << endl;
 
 string nama;
 char golongan;
 int jam_kerja, upah_per_jam, total_upah;
 
 // proses input
 cout << "Nama Karyawan: ";
 getline(cin,nama);
 
 cout << "Golongan: ";
 cin >> golongan;
 
 cout << "Jumlah jam kerja: ";
 cin >> jam_kerja;
 
 // tentukan jumlah upah per jam berdasarkan golongan
 switch (golongan) {
  case 'A':
    upah_per_jam = 5000;
    break;
  case 'B':
    upah_per_jam = 7000;
    break;
  case 'C':
    upah_per_jam = 8000;
    break;
  case 'D':
    upah_per_jam = 10000;
    break;
  }
 
  total_upah = jam_kerja * upah_per_jam;
 
  // cek apakah jam kerja lebih dari 48 jam
  if ( (jam_kerja - 48) > 0 ) {
     total_upah = total_upah + ((jam_kerja - 48)*4000);
  }
 
  // proses output
   cout << endl;
   cout << nama << " menerima upah Rp." << total_upah << " per minggu";
   cout << endl;
 
 
 return 0;
}