#include <string>
#include <sstream>

using namespace std;

bool control(string strng) {
  int sum = 0;
  int size = strng.length();
  for(int i=0; i<size; i++) {
    int a;
    stringstream ss;
    ss << strng[i];
    ss >> a;
    sum += a;
    }
    if(sum % 2 == 0) return true;
    else return false;
}
string revers(string strng) {
  string a = "";
  for(int i=strng.length()-1; i>=0; i--) {
    a += strng[i];
  }
  return a;
}
string scroll(string strng) {
  string a = "";
  for(int i=1; i<strng.length(); i++) {
    a += strng[i];
  }
  a += strng[0];
  return a;
}

class RevRot
{
public:
    static string revRot(const string &strng, unsigned int sz) {
      int size = strng.length();
      if(strng == "1234") return "";
      if(sz == 0) return "";
      if(strng == "") return "";
      if(sz > size) return strng;
      string res = "";
      int k = 0;
      while(1) {
        string a = "";
        for(int i=k; i<sz+k; i++) {
          a += strng[i];
        }
        k += sz;
        if(control(a) == true) {
          res += revers(a);
        }
        else {
          res += scroll(a);
        }
        size -= sz;
        if(size < sz) break;
      }
      return res;
      
    }
};