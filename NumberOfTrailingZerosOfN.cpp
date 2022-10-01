long zeros(long n) {
  int sum = 0;
  int temp = 1;
  while(temp >= 1) {
    temp = n / 5;
    sum += temp;
    n /= 5;
  }
  return sum;
}