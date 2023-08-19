// Write a java program which accept string from user and check whether it contains vowels in it or not.

// Input : "MarvellouS"
// Output : SuollevraM

import java.util.*;

class StringDemo
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd   = Arr.length -1;

        while(iStart < iEnd)
        {
            int Temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = (char)Temp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}

class Program33_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        
        String name = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        String sret = dobj.Reverse(name);
        System.out.println("Result :"+sret);

    }
}