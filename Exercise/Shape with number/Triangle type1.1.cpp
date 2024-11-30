#include <iostream>
 
using namespace std;

/* Tangle type 1.1 output:
    1 
    2 2
    3 3 3 
*/
 
int main()
{
  cout << "##  Program C++ Triangle type 1.1  ##" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=1;i<=tinggi_segitiga;i++) {
    for(j=1;j<=i;j++) {
      cout << i <<" ";
    }
    cout << endl;
  }
 
  return 0;
}