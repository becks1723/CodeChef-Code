// Completed on 04-18-2021
// Language: Java

/* The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems 
branded with the enormous Input/Output warning.
You are expected to be able to process at least 2.5MB of input data per second at runtime.
*/

//MY CODE:
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.InputStream;
import java.util.*;


// Remember that the class name should be "Main" and should be "public".
public class Main 
{
 public static void main(String[] args) 
 {
   Scanner num = new Scanner(System.in);
   int a = num.nextInt();
   int b = num.nextInt();
   int total = 0;
   ArrayList<Integer> list = new ArrayList<Integer>();
   for(int i = 1; i <= a; i++)
   {
     int y = num.nextInt();
     list.add(y);
   }
   for(int j = 0; j<=list.size()-1; j++)
   {
     if(b!=0 && list.get(j)%b==0)
     {
       total++;
     }
   }
   System.out.println(total);
   }
 }