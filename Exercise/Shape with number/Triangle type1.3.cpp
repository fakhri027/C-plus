#include <iostream>
#include <iomanip>
 
using namespace std;

/* Triangle type 1.3 output:
    1 
    2 3
    4 5 6
*/

int main()
{
  cout << "##  Program C++ Triangle type 1.3  ##" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
 int tinggi_segitiga,i,j,k;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i=1;i<=tinggi_segitiga;i++) {
    for(j=1;j<=i;j++) {
      k++;
      cout << setw(3) << k << " ";
    }
    cout << endl;
  }
 
  return 0;
}