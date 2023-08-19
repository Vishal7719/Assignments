// Write a program which accept two number from user and check whether that numbers are equal or Not.
// Input : 10 10
// Output : Equal
// Input : 10 12
// Output : Not Equal

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0;

BOOL ChkEqual(int iNo1 , int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0 , iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &iValue1,&iValue2);

    bRet = ChkEqual(iValue1 , iValue2);
    
    if(ChkEqual(iValue1,iValue2))
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}