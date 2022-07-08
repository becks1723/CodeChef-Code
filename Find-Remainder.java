// Completed on 04-18-2021
// Language: Java

/* Write a program to find the remainder when an integer A is divided by an integer B.
*/

//MY CODE:
import java.io.*;
import java.lang.*;
import java.util.*;

class FindRemainder
{
  public static void main(String[] args)
  {
    Scanner scnr = new Scanner(System.in);
    int tests = scnr.nextInt();
    for(int x = 1; x <= tests; x++)
    {
      int a = scnr.nextInt();
      int b = scnr.nextInt();
      int rem = a%b;
      System.out.println(rem);
    }
  }
}