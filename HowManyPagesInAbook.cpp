uint32_t amount_of_pages(uint32_t summary){
  if(summary < 10) return summary;
  unsigned int sum = 9;
  int n, i = 10;
  while(sum != summary) {
    n = i;
    while(n!=0) {
      n = n / 10;
      sum++;
    }
    i++;
  }
  return i-1;
}