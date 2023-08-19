//Accept N numbers from the user and check whether 11 is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Chk(int Arr[] , int iLength) 
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
            iCnt++;
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));  // malloc = memory allocation

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Chk(ptr , iSize);  // (ptr = Base address of array , iSize = No of elements in array)

    if(bRet == TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is not Present");
    }

    free(ptr);  // memory deallocation
    
    return 0;
}

// Time complexity :- O(N) = N is no. of elements.
// Best case complexity :- N
// Average :- N
// Worst case :- N 

// Is array is sorted :- No