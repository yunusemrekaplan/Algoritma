int digital_root(int n) {
  if(n==0) return 0;
  if(n<10) return n;
  
  int rem, sum=0;
  while(n>9) {
    rem = n % 10;
    sum = sum + rem;
    n = n / 10;
  }
  sum += n;
  return digital_root(sum);  
}