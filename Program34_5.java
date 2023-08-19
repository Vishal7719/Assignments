// Write a java program which accept N numbers from user and display all elements which are divisible by 3 and 5

// Input : 6
// Elements : 85    66  3   55  93  88       
// Output : 66  55  88
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
    // Method to find and print all elements divisible by both 3 & 5 in array
    public void display()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11) == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
    
}

class Program34_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter No. of Elements : ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        aobj.Accept();
        aobj.display();    
    }
}