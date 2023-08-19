/*  Write a java program which accept N numbers from user and accept one another number as NO , 
check whether NO is present or not. 

Input : N = 6
        Elements : 85   66  3   66  93  88
        NO :    66
Output : TRUE 

*/

import java.util.*;

class Numbers
{
    boolean Check(int Arr[] , int iNo)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return true;
            }
        }
        return false;  
    }

}
class Program36_1
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

        System.out.println("Enter the number to Check :");
        int iNo = sobj.nextInt();
        
        Numbers nobj = new Numbers();

        boolean bRet = nobj.Check(Arr , iNo);
        if(bRet == true)
        {
            System.out.println("True "+iNo+" is Present");
        }
        else
        {
            System.out.println("False "+iNo+" is Not Present");
        }
        
    }
}