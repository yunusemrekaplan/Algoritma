using namespace std;
typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n) {
    unsigned long long sum = 4, frst = 1, sec = 2, temp;
    for(int i=2; i<n; i++) {
      temp = sec;
      sec = sec + frst;
      frst = temp;
      sum += sec;
    }
    return sum * 4;
  }
};