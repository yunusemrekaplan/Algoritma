int area_or_perimeter(int l , int w) {
  int cevre;
  int alan;
  if(l == w) {
    alan = l*w;
    return alan;
  }
  else {
    cevre = (l*2) + (w*2);
    return cevre;
  }
}