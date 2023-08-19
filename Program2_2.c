// Accept one number from user and print that number of * on screen.
// Using While loop

#include <stdio.h>

int Display(int iNo)
{
    while (iNo >= 1)
    {
        printf(" * ");
        iNo --;
    }
}

int main()
{
   int iValue = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   Display(iValue);
   
   return 0;
}