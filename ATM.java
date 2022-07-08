// Completed on 04-13-2021
// Language: Java

/* Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
For each successful withdrawal the bank charges 0.50 $US.

Calculate Pooja's account balance after an attempted transaction.
*/

//MY CODE:
import java.util.*;

class ATM
{
  public static void main(String[] args)
  {
    Scanner theinput = new Scanner(System.in);
    while (theinput.hasNext())
    {
    int withdraw = theinput.nextInt();
    double balance = theinput.nextDouble();
    if((withdraw <= balance-0.5) && (withdraw%5 == 0) && (withdraw > 0))
    {
      double result = balance - withdraw - 0.5;
      String r = String.format("%.2f",result);
      System.out.println(result + "0");
    }
    else
    {
      String b = String.format("%.2f", balance);
      System.out.println(b);
    }
    }
  }
}