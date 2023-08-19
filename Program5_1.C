// Write a program which accept number from user and print that number of times $ & * on Screen.
// Input : 5 
// Output : $ * $ * $ * $ * $ *

#include<stdio.h>

void Pattern(int iNo)
{
    int i;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= iNo; i++)
    {
        printf("$ * ");
    }
}

int main ()
{
    int iValue = 0 ;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0 ;
}