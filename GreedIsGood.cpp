#include <vector>
using namespace std;

int score(const vector<int>& dice) {
  vector<int> count(6,0);
  int size = dice.size(), temp, point = 0;
  for(int i=0; i<size; i++) {
    temp = dice[i];
    count[temp-1]++;
  }
  if(count[0] >= 3) {
    point += 1000;
    point += (count[0] - 3) * 100;
  }
  else point += count[0] * 100;
  if(count[4] >= 3) {
    point += 500;
    point += (count[4] - 3) * 50;
  }
  else point += count[4] * 50;
  if(count[1] >= 3) point += 200;
  if(count[2] >= 3) point += 300;
  if(count[3] >= 3) point += 400;
  if(count[5] >= 3) point += 600;  
    
  return point; 
}