// Write a java program which accept number from user and return the count of digits in between 3 and 7
// Input : 2395
// Output : 1
// Input : 1018
// Output : 0

import java.util.*;

class Digit 
{
    public int CountRange(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCnt++;
            }
            iNo = iNo / 10;  
        }
        return iCnt;
    }
}

class Program35_3
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountRange(iNo);

        System.out.println(iRet);
    }  
}
