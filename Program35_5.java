/*  Write a java program which accept number from user and return difference between 
summation of even digits and summation of odd digits.

Input : 2395
Output : -15  (2 - 17)
Input : 1018
Output : 6  (8 - 2)
*/

import java.util.*;

class Digit 
{
    public int CountDiff(int iNo)
    {
        int iDigit = 0;
        int Esum = 0 , Osum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                Esum = Esum + iDigit;
            }
            else
            {
                Osum = Osum + iDigit;
            }
            iNo = iNo / 10;  
        }
        return Esum - Osum;
    }
}

class Program35_5
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountDiff(iNo);

        System.out.println(iRet);
    }  
}
