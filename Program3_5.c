// Write a program which accept number from user and return difference between summation of all its factors and non factors.
// Input : 12 
// Output : - 34      (16 - 50)
// Input : 10
// Output : -29        (8 - 37) 

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;   // For loop
    int iFact = 0;   // for Factors
    int iNonFact = 0;   // for Non Factors
    int iDiff = 0;   // Diff

    {
        for(iCnt = 1 ; iCnt <= (iNo / 2) ; iCnt++)    
        {
            if((iNo % iCnt) == 0)
            {
                iFact = iFact + iCnt;
            }
        }
   
        for(iCnt = 2 ; iCnt <= iNo ; iCnt++)     // Start with 2 and iterate till Last
        {
            if(iNo % iCnt != 0)
            {
                iNonFact += iCnt;
            }
        }

    }
    return iDiff = iFact - iNonFact;    // Substraction.
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d" , &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is  : %d " , iRet);

    return 0;
}