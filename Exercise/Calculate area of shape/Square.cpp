#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Calculate area of square  ##" << endl;
  cout << "===========================================" << endl;
  cout << endl;
 
  float sisi, luas;
 
  cout << "Input sisi persegi: ";
  cin >> sisi;
  cout << endl;
 
  luas = sisi * sisi;
 
  cout << "Luas persegi = "<< luas << endl;
 
  return 0;
}