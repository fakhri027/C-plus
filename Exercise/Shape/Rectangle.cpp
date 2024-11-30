#include <iostream>
 
using namespace std;

/* Rectangle output:
    * * * * * *
    * * * * * *
    * * * * * *
*/
 
int main()
{
  cout << "##  Program C++ Rectangle base on input  ##" << endl;
  cout << "===========================================" << endl;
  cout << endl;
 
  int tinggi_persegi,lebar_persegi,i,j;
 
  cout << "Input tinggi persegi: ";
  cin >> tinggi_persegi;
  cout << "Input lebar persegi: ";
  cin >> lebar_persegi;
 
  cout << endl;
 
  for(i=1;i<=tinggi_persegi;i++) {
    for(j=1;j<=lebar_persegi;j++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}