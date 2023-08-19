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
    public String StrNCatX(String src , String dest , int iCnt)
    {
        String res = src + " ";

        for(int i = 0; i < iCnt && i < dest.length(); i++)
        {
            res = res + dest.charAt(i);
        }
        return res;
    }

}
class Program37_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first string: ");
        String src = sobj.nextLine();

        System.out.println("Enter the second string: ");
        String dest = sobj.nextLine();

        System.out.println("Enter the Number of characters You want to concat : ");
        int iCnt = sobj.nextInt();

        StringDemo dobj = new StringDemo();

        String sRet = dobj.StrNCatX(src , dest , iCnt);

        System.out.println("Output :"+sRet);
    }
}