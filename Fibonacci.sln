public class Fibonacci
{
    public static int Fib(int n)
    {
        if(n == 1 || n == 2) return 1;
        int ilkSayi = 1;
        int ikinciSayi = 1;
        int sum = 0;
        for(int i=3; i<=n; i++) {
            sum = ilkSayi + ikinciSayi;
            ilkSayi = ikinciSayi;
            ikinciSayi = sum;
        }
        
        return sum;
    }
}
