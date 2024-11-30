#include <iostream>
 
using namespace std;

/* Pyramid type 1 output:
        *
       * *
      * * *
*/
 
int main()
{
  cout << "##  Program C++ Pyramid type 1  ##" << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j,k;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=1; i<=tinggi_segitiga; i++) {
 
    for(j=1; j<=tinggi_segitiga-i; j++) {
      cout << " ";
    }
 
    for(k=1; k<=i; k++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}