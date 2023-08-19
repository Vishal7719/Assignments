///////////////////////////////////////////////////////////////////////////////////
// Function Name :  Check()  
// Description   :  Accept 2 Input From User & Find Second Input Is Present Or Not
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  19 Aug 2023
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    for(int i = 0; i< iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iVal = 0;
    int *p = NULL;

    BOOL bRet = FALSE;

    printf("Enter number of Elements :");
    scanf("%d", &iSize);

    printf("Enter the number ");
    scanf("%d" , &iVal);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &(p[iCnt]));
    }

    bRet = Check(p , iSize , iVal);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else 
    {
        printf("False");
    }

    free(p);

    return 0;
}