/*  Write a java program which accept N numbers from user and return product of all odd elements
Input : N = 6
        Elements : 15 66 3 70 10 88
Output : 45
*/

import java.util.*;

class Numbers
{
    public int Product(int Arr[])
    {
        int iCnt = 0;
        int iMult = 1;

        if((Arr[iCnt] % 2) == 0)
        {
            return 0;
        }

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iMult = Arr[iCnt] * iMult;
            }
        }  
        return iMult;
    }

}
class Program36_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter No. of Elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements : ");

        for(int iCnt = 0; iCnt < Arr.length ; iCnt++)              
        {
            Arr[iCnt] = sobj.nextInt();
        }

        Numbers nobj = new Numbers();

        int iRet = nobj.Product(Arr);

        System.out.println("Product of Odd Elements :"+iRet);
    }
}