// Write a java program which accept string from user and count number of Capital charactrs.
// Input : "INdia"
// Output : 2
import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }    
        }
        return iCount;
    }
}

class Program33_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        
        String name = sobj.nextLine();

        StringX obj = new StringX();

        // int iRet = obj.CountSmall(name);
        // System.out.println("Number of small characters are : "+iRet);

        int iRet = obj.CountCapital(name);
        System.out.println("Number of Capital characters are : "+iRet);
    }
}