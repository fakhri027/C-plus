#include <iostream>
 
using namespace std;

/* Triangle type 1 output:
    *
    * *
    * * *
*/
 
int main()
{
  cout << "##  Program C++ Triangle type 1  ##" << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=1;i<=tinggi_segitiga;i++) {
    for(j=1;j<=i;j++) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}