///////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
// Description   :  Accept number from user and display belo pattern.   
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  29 Aug 2023
//
// Input :   8
// Output:   2  4   6   8   10  12  14  16
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
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
