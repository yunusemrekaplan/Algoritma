int basamakBul(long long n) {
  int count = 0;
  while(n > 0) {
    n = n / 10;
    count++;
  }
  return count;
}

class Thirteen
{
public:
    static long long thirt(long long n) {
      int arr13[6] = {1, 10, 9, 12, 3, 4};
      int sum = 0, temp = 0;
      
      while(1) {
        int NOD = basamakBul(n);
        int tempN = n;
        for(int i=0; i<NOD; i++) {
          temp = tempN % 10;
          tempN = tempN / 10;
          sum += temp * arr13[i % 6];
        }
        if(n == sum) break;
        n = sum;
        sum = 0;
      }
      return sum;
    }
};