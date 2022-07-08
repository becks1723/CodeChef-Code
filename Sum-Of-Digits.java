// Completed on 04-18-2021
// Language: Java

/* You're given an integer N. Write a program to calculate the sum of all the digits of N.
*/

//MY CODE:
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
  {
    Scanner tests = new Scanner(System.in);
    int numoftests = tests.nextInt();
    for(int x = 1; x <= numoftests; x++)
    {
      int num = tests.nextInt();
      int total = 0;
      while(num > 0)
      {
        total = total + (num%10);
        num = num / 10;
      }
      System.out.println(total);
    }
      }
	}
}