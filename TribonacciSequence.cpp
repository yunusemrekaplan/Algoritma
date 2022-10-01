#include<vector>

using namespace std;
std::vector<int> tribonacci(std::vector<int> signature, int n)
{ 
  std::vector<int> result;
  if(n == 0) return result;
  int a1 = signature.size();
  int b,ent = 0;
  int x;
  if(a1<n) x = a1;
  else x = n;
  for(int i=0; i<x; i++) {
    b = signature[i];
    result.push_back(b);
  }
  for(int i=a1-1; i>=0; i--) {
    ent += signature[i];
  }
  int b1 = result.size();
  if(b1 == n) return result;
  result.push_back(ent);
  int sum;
  for(int i=a1; i<n-1; i++) {
    sum = ent + result[i-1] + result[i-2];
    result.push_back(sum);
    ent = sum;
  }
  
  return result;
}