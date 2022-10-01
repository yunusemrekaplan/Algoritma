using System;

public static class Kata
{
  public static string AddBinary(int a, int b)
  {
    int num = a + b;
            string temp = "";
            while (num > 1)
            {
                temp += Convert.ToString(num % 2);
                num = num / 2;
            }
            temp += Convert.ToString(num);
            Console.WriteLine(temp);
            string res = "";
            for(int i=temp.Length-1; i>=0; i--)
            {
                res += temp[i];
            }
    return res;
  }
}