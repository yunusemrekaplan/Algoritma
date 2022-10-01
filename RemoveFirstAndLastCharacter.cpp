#include <string>

using namespace std; 

string sliceString (string str )
{
  int a1 = str.length();
  string a = " ";
  for(int i=1; i<a1-2; i++) {
    a += " ";
  }
  int j=1;
  for(int i=0; i<a1-1; i++) {
    a[i] = str[j];
    j++;
  }
  return a ; 
}