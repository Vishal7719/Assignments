
///////////////////////////////////////////////////////////////////////////////////
// Function Name :  FirstOcc()  
// Description   :  Accept N numbers from user & Find First Occurance Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Vishal Chaudhari
// Date          :  19 Aug 2023
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i  = 0;

    for(i = 0; i< iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(i == iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iVal = 0;
    int *p = NULL;

    printf("Enter number of Elements :");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &(p[iCnt]));
    }

    printf("Enter the number which you want to search :");
    scanf("%d" , &iVal);

    iRet = FirstOcc(p , iSize , iVal);

    if(iRet == -1)
    {
        printf("-1");
    }
    else
    {
        printf("\nThe first occurence is at index - %d.\n", iRet );
    }

    free(p);

    return 0;
}