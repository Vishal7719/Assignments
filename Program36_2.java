/*  Write a java program which accept N numbers from user and accept one another number as NO , 
return index of first occurrence of that No.

Input : N = 6
        Elements : 85   66  3   66  93  88
        NO :    66
Output : 1 
*/

import java.util.*;

class Numbers
{
    public int FirstOcc(int Arr[] , int iNo)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return iCnt;
            }
        }
        return -1;  
    }

}
class Program36_2
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

        System.out.println("Enter the number to Search :");
        int iNo = sobj.nextInt();
        
        Numbers nobj = new Numbers();

        int Index = nobj.FirstOcc(Arr , iNo);

        if(Index == -1)
        {
            System.out.println("-1");
        }
        else
        {
            System.out.println(Index);
        }
        
    }
}