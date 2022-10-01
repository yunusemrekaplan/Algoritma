#include<vector>

using namespace std;
class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      vector<int> odd;
      for(int i=0; i<array.size(); i++) if(array[i] % 2 != 0) odd.push_back(array[i]);
      sort(odd.begin(), odd.end());
      int j=0;
      for(int i=0; i<array.size(); i++) {
        if(array[i] % 2 != 0) {
          array[i] = odd[j];
          j++;
        }
      }
    return array;
    }
};