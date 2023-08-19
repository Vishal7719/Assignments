// Write a java program which accept number from user and return multiplication of all digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 8

import java.util.*;

class Digit 
{
    public int Multiply(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;  
        }
        return iMult;
    }
}

class Program35_4
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number :");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.Multiply(iNo);

        System.out.println(iRet);
    }  
}
