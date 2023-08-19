// Write a java program which accept N numbers from user and display all elements which are divisible by 5

// Input : 6
// Elements : 85    66  3   80  93  88       
// Output : 85 80
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
    public void display()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5) == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
    
}

class Program34_2
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