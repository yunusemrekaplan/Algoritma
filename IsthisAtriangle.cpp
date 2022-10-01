namespace Triangle
{
  bool isTriangle(long a, long b, long c)
  {
    if(a <= 0) return false;
    if(b <= 0) return false;
    if(c <= 0) return false;
    
    if(a == b && b == c && a == c) return true; 

    
    long bc,ac,ab;
    bc = b-c;
    ac = a-c;
    ab = a-b;
    if(bc < 0) bc = bc * -1;
    if(ac < 0) ac = ac * -1;
    if(ab < 0) ab = ab * -1;
    
    if(bc < a && a < b+c) {
      if(ac < b && b < a+c) {
        if(ab < c && c < a+b) return true;
        else return false;
      }
      else return false;
    }
    else return false;
  }
};