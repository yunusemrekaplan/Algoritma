#include <string>

using namespace std;

string duplicate_encoder(const string& word){
  int size = word.length();
  bool control = false;
  string res = "";
  
  for(int i=0; i<size; i++) {
    char temp = toupper(word[i]);
    for(int j=0; j<size; j++) {
      if(i == j) continue;
      if(temp == toupper(word[j])) {
        control = true;
        break;
      }
    }
    if(control == true) res += ")";
    else res += "(";
    control = false;
  }
  return res;
}