// Write a java program which accept number from user and return the count of odd digits.
// Input : 2395
// Output : 3
// Input : -1018
// Output : 2

import java.util.*;

class Digit 
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo; 
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;  
        }
        return iCnt;
    }
}

class Program35_2
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountOdd(iNo);

        System.out.println(iRet);
    }  
}
