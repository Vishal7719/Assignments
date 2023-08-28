///////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
// Description   :  Accept number from user and display belo pattern.   
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  29 Aug 2023
//
// Input : 5
// Output: 5    #    4  #   3   #   2   #   1   #   
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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
