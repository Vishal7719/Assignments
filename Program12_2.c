////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Minimum()  
// Description   :  Accept N numbers from user and return the smallest number 
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  19 Aug 2023
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0, iMin = 0;

    if(Arr == NULL)
    {
        return -1;
    }

    iMin = Arr[0]; // compare the previous value to check the existing value is greater than previous or not 
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue = 0;
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

    iRet = Minimum(p, iSize);
    printf("Smallest Number is %d", iRet);

    free(p);

    return 0;
}