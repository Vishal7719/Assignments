// Accept number from user and check whether number is even or odd.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    int num ;

    if(num % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf("Enter Number : ");
   scanf("%d", &iValue);

   bRet = ChkEven(iValue);

   if(bRet == TRUE)
   {
        printf("%d is Even Number" ,iValue);
   }
   else
   {
        printf("%d is Odd Number",iValue);
   }
   return 0;
}


