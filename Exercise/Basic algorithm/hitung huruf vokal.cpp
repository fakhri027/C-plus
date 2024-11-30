#include <iostream>
using namespace std;
  
int main()
{
  cout << "##  Program C++ Menghitung Jumlah Huruf Vokal  ##" << endl;
  cout << "=================================================" << endl;
  cout << endl;
  
  string x;
  int vokal = 0;
  
  cout << "Input kata / kalimat: ";
  getline(cin,x);
  cout << endl;
 
  // Hitung jumlah huruf vokal
  for(int i = 0; i < x.length(); i++){
    if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o') {
      vokal++;
    }
  }
 
  // Tampilkan total huruf vokal jika ditemukan
  if (vokal > 0) {
    cout << "Jumlah huruf vokal = " << vokal;
  }
  else {
    cout << "Huruf vokal tidak ditemukan";
  }
 
  cout << endl;
  return 0;
}