/* Write a java  program which accepts 2 strings from user and concat N characters of second string 
    after first string. Value of N should be accepted from user.

Input  : Str1 : Marvellous Infosystems 
str2 :  Logic Building 
NO : 5
Output : Marvellous Infosystems Logic
*/

import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String src , String dest)
    {
        src.toLowerCase();
        dest.toLowerCase();

        if(src == dest)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
class Program37_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first string: ");
        String src = sobj.nextLine();

        System.out.println("Enter the second string: ");
        String dest = sobj.nextLine();

        StringDemo dobj = new StringDemo();

        boolean bRet = dobj.StrCmpX(src , dest);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}