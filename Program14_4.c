///////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
// Description   :  Accept number from user and display belo pattern.   
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  29 Aug 2023
//
// Input :   5
// Output:   #   1  *   #   2   *   #   3   *   #   4   *   #   5   *   
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
  
}

int main()
{
    int iValue = 0;

    printf("Enter number of frequency of pattern...\n");
    scanf("%d" , &iValue);

    Pattern(iValue);

    return 0;
}
