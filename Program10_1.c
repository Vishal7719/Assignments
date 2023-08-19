//Accept N numbers from the user and return frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLength) 
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            Arr[iCnt]++;
        }
    }
    return Arr[iCnt];
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;


    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));  // malloc = memory allocation

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr , iSize);  // (ptr = Base address of array , iSize = No of elements in array)

    printf("Number of even numbers : %d \n",iRet);

    free(ptr);  // memory deallocation
    
    return 0;
}

// Time complexity :- O(N) = N is no. of elements.
// Best case complexity :- N
// Average :- N
// Worst case :- N 

// Is array is sorted :- No