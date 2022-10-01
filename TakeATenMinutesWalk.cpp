#include<vector>

bool isValidWalk(std::vector<char> walk) {
  int countN=0, countE=0;
  int n = walk.size();
  if(n != 10) return false;
  else {
    for(int i=0; i<n; i++) {
      if(walk[i] == 'n') countN++;
      else if(walk[i] == 's') countN--;
      else if(walk[i] == 'e') countE++;
      else countE--;
    }
  }
  if(countN == 0 && countE == 0) return true;
  else return false;
}