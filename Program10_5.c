//Accept N numbers from the user and count frequency of  11.

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[] , int iLength) 
{
    int iCnt = 0;
    int Freq = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Freq++;
        }
    }
    return Freq;
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

    iRet = CountFrequency(ptr , iSize);  // (ptr = Base address of array , iSize = No of elements in array)

    printf("Frequency of 11 is : %d",iRet);

    free(ptr);  // memory deallocation
    
    return 0;
}

// Time complexity :- O(N) = N is no. of elements.
// Best case complexity :- N
// Average :- N
// Worst case :- N 

// Is array is sorted :- No