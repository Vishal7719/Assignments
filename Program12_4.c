////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Digits()  
// Description   :  Accept N numbers from user and display all such numbers which contains 3 digit numbers in it. 
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  19 Aug 2023
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers which contains 3 digit numbers in it...\n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > 99) && (Arr[iCnt] <= 999))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter The Elements : \n");

    for(iCnt = 0;iCnt <iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);
    
    free(p);

    return 0;
}