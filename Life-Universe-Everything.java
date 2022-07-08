// Completed on 04-18-2021
// Language: Java

/* 
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 4242.
All numbers at input are integers of one or two digits.
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
        Scanner scr = new Scanner(System.in);
        int num = scr.nextInt();
        while(num != 42)
        {
        System.out.println(num);
        num = scr.nextInt();
        }
	}
}
