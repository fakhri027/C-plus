#include <iostream>
 
using namespace std;

/* Pyramid type 2 output:
    * * *
     * *
      * 
*/

int main()
{
  cout << "##  Program C++ Pyramid type 2  ##" << endl;
  cout << "=============================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j,k;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=0; i<tinggi_segitiga; i++) {
 
    for(j=1; j<=i; j++) {
      cout << " ";
    }
 
    for(k=1; k<=tinggi_segitiga-i; k++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}