
///////////////////////////////////////////////////////////////////////////////////
// Function Name :  Range()  
// Description   :  Accept N numbers from user & Find Last Occurance Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  19 Aug 2023
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart , int iEnd)
{
    printf("Elements between the Range are : \n");
    for(int i = 0; i < iLength; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\n" , Arr[i]);
        }
    }
}

int main()
{

    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}