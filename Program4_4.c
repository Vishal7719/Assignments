// Write a program which accepts three numbers from user and Print its Multiplication.
// Input : 5  4  7
// Output : 140
// Input : 5   0  7
// Output : 35
// Input : 0 5 0
// Output : 5

#include<stdio.h>

/* int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    int ans = 0;

    if(iNo1 != 0)
    {
        ans = 1;
        ans *= iNo1;
    }

    if(iNo2 != 0)
    {
        ans = ans == 0 ? 1 : ans;
        ans *= iNo2;
    }

    if(iNo3 != 0)
    {
        ans = ans == 0 ? 1 : ans;
        ans *= iNo3;
    }

    return ans;
} */

int MultiplyX(int iNo1 , int iNo2, int iNo3)
{
    int ans = 0;
    int count = 0;

    if(iNo1 == 0)
    {
        count++;
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        count++;
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        count++;
        iNo3 = 1;
    }

    int iRet = iNo1 * iNo2 * iNo3;

    if(count == 3)
    {
        return 0;
    }
    else
    {
        return iRet;
    }
        

}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0 , iRet = 0;
    
    printf("Please Enter Three Numbers : ");
    scanf("%d %d %d", &iValue1,&iValue2 ,&iValue3);

    iRet = MultiplyX(iValue1 , iValue2 , iValue3);
    
    printf("Multiplication is : %d" , iRet);

    return 0;
}