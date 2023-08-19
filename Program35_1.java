// Write a java program which accept number from user and return the count of even digits.
// Input : 2395
// Output : 1
// Input : -1018
// Output : 2

import java.util.*;

class Digit 
{
    public int CountEven(int iNo)
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
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;  
        }
        return iCnt;
    }
}

class Program35_1 
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountEven(iNo);

        System.out.println(iRet);
    }  
}
