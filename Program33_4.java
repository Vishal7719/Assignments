// Write a java program which accept string from user and check whether it contains vowels in it or not.

// Input : "MarvellouS"
// Output : TRUE
// Input : "xyz"
// OUTPUT : FALSE

import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        char Vowels[] = {'a','e', 'i', 'o', 'u'};

        for(int i = 0; i < str.length() ; i++)
        {
            char ch = str.charAt(i);                        
        
            for(int j = 0; j < Vowels.length; j++)
            {
                ch = Character.toLowerCase(ch);
                if(ch == Vowels[j])
                {
                    return true;
                }
            }
        }

        return false;
    }
}

class Program33_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        
        String name = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        boolean bRet = dobj.ChkVowel(name);
        if(bRet == true)
        {
            System.out.println("Vowels is Present");
        }
        else
        {
            System.out.println("Vowels is NOT Presnt");
        }
    }
}