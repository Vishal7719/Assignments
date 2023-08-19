// Write a program which accept total marks & obtained marks from user and Calculate percentage.
// Input: 1000    745
// Output : 74.4 %

#include <stdio.h>

float Percentage(float iNo1 , float iNo2)
{
    if((iNo1 || iNo2) == 0)
    {
        printf("0");
    }
    return (iNo2 / iNo1) * 100;
}

int main()
{
    int iVal1 = 0 , iVal2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iVal1);

    printf("Please Enter obtained marks :");
    scanf("%d",&iVal2);

    fRet = Percentage(iVal1 , iVal2);
    printf("%.1f %%",fRet);

    return 0;
}