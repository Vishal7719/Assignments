// Write a java program which accept string from user and return difference between frequency of small characters and  capital characters.

// Input : "MarvellouS"
// Output : 6 (8-2)

import java.util.*;

class StringX
{
    public int CountDiff(String str)
    {
        char Arr[] = str.toCharArray();
        int sCount = 0 , cCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                sCount++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {   
                cCount++;
            }
        }
        return sCount - cCount;
    }
}

class Program33_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        
        String name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountDiff(name);
        System.out.println("Difference between small and capital : "+iRet);
    }
}