// Completed on 04-18-2021
// Language: Java

/* You are asked to calculate factorials of some small positive integers. */

//MY CODE:
import java.io.*;
import java.lang.*;
import java.util.*;
import java.math.*;

class SmallFactorials
{
  public static void main(String[] args) throws java.lang.Exception
  {
    Scanner scnr = new Scanner(System.in);
    int test = scnr.nextInt();
    for(int x = 0; x < test; x++)
    {
      int fact = scnr.nextInt();
      {
        BigInteger total = BigInteger.valueOf(1);
        for(int y = fact; y >0; y--)
        {
          BigInteger z = BigInteger.valueOf(y);
          total = total.multiply(z);
        }
        System.out.println(total);
      }
    }
  }
}
