//Accept N numbers from the user and display all numbers divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength) 
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ;iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));  // malloc = memory allocation

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr , iSize);  // (ptr = Base address of array , iSize = No of elements in array)

    free(ptr);  // memory deallocation
    
    return 0;
}

// Time complexity :- O(N) = N is no. of elements.
// Best case complexity :- N
// Average :- N
// Worst case :- N 

// Is array is sorted :- No