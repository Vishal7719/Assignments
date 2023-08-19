// Write a program which accept one number from user and check whether that number is Greater than 100 or Not.
// Input : 101
//Output : Greater 
// Input : 40
// Output : Smaller

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0;

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter any Number ");
    scanf("%d" , &iValue);

    bRet = ChkGreater(iValue);
    
    if(ChkGreater(iValue))
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}