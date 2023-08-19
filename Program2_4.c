// Accept two numbers from user and display first number in second number of times.
// Input : 12 5
// Output : 12 12 12 12 12

// Input : -2 3
// Output : -2 -2 -2


#include <stdio.h>

void Display(int iNo , int iFrequency)
{
    int i = 0;

    for(i = 1 ; i <= iFrequency ; i++)
    {
        printf("%d\t" , i);
    }
}

int main()
{
   int iValue = 0;
   int iCnt = 0;

   printf("Enter Number : ");
   scanf("%d", &iValue);

   printf("Enter Frequency : ");
   scanf("%d" , &iCnt);

   Display (iValue,iCnt);
   
   return 0;
}