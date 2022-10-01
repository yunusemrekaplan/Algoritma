#include <vector>

using namespace std;
vector<int> move_zeroes(const vector<int>& input) {
  int a1 = input.size();
  vector <int> v1;
  int b;
  int counter0 = 0;
  for(int i=0; i<a1; i++) {
    if(input[i] == 0) {
      counter0++;
    }
    else {
      b = input[i];
      v1.push_back(b);
    }
  }
  for(int i=0; i<counter0; i++) {
    v1.push_back(0);
  }
  return v1;

}