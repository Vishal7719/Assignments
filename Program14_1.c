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
// Output: A    B   C   D   E
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';

    for(int iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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
