/*  Write a java program which accept N numbers from user and accept Range , Display all elements from that range.

Input : N = 6
        Start : 60
        End :   90
        Elements : 85   66  3   76  93  88
Output : 66 76 88 
*/

import java.util.*;

class Numbers
{
    public void Display(int Arr[] , int iStart , int iEnd)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.print(Arr[iCnt]+" ");
            }
           
        }  
    }

}
class Program36_4
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

        System.out.println("Enter start number :");
        int iStart = sobj.nextInt();

        System.out.println("Enter end number :");
        int iEnd = sobj.nextInt();
        
        Numbers nobj = new Numbers();

        nobj.Display(Arr , iStart , iEnd);
    }
}