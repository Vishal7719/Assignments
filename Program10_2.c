//Accept N numbers from the user and return difference between frequency of even numbers and Odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength) 
{
    int iEven = 0, iOdd = 0, i = 0, iRet = 0;

    for(i= 0; i < iLength ;i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    iRet = iEven - iOdd;
    return iRet;
}

int main()
{
    
    int *ptr = NULL;
    int iCnt = 0 , iSize = 0 , iRet = 0;


    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));  // malloc = memory allocation

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr , iSize);  // (ptr = Base address of array , iSize = No of elements in array)

    printf("Difference : %d \n",iRet);

    free(ptr);  // memory deallocation
    
    return 0;
}

// Time complexity :- O(N) = N is no. of elements.
// Best case complexity :- N
// Average :- N
// Worst case :- N 

// Is array is sorted :- No