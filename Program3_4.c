// Write a program which accept number from user and return summation of all its non factors.
// Input : 12 
// Output : 50
// Input : 10
// Output : 37

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0; 
    int iSum = 0;

    for(iCnt = 2 ; iCnt <= iNo ; iCnt++)     // Start with 2 and iterate till Last
    {
        if(iNo % iCnt != 0)
        {
            //printf("%d\t" ,iCnt);
            iSum += iCnt;
        }
    }
    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all Non Factors : %d" , iRet);

    return 0;
}