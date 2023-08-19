// Write a java program which accept string from user and count number of Small charactrs.
// Input : "INdia"
// Output : 3
import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }    
        }
        return iCount;
    }
}

class Program33_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        
        String name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountSmall(name);
        System.out.println("Number of small characters are : "+iRet);
    }
}