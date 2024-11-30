#include <iostream>
 
using namespace std;

/* Triangle type 1.2 output:
    1
    1 2
    1 2 3
    1 2 3 4
*/

int main()
{
  cout << "##  Program C++ Triangle type 1.2  ##" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=1;i<=tinggi_segitiga;i++) {
    for(j=1;j<=i;j++) {
      cout << j <<" ";
    }
    cout << endl;
  }
 
  return 0;
}