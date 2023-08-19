// Write a java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

// Input : 6
// Elements : 85    66  3   80  93  88       
// Output : 53 (234 - 181)
import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }


    public int Diff()
    {
        int ESum = 0 , OSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                ESum = ESum + Arr[iCnt];
            }
            else
            {
                OSum = OSum + Arr[iCnt];
            }
        }
        return ESum - OSum;
    }
    
}

class Program34_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter No. of Elements : ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();

        System.out.println("Difference is : "+aobj.Diff());  // Inline method Call
        
    }
}