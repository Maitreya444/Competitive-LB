#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/*
Test cases :
1. Single Element Array
2. All Positive Elements
3. All Negative Elements
4. Mixed Positive and Negative Elements
5. All Elements are the Same
6. Array with Zeros
7. Large Numbers
8. Array with Only Two Elements
9. Empty Array
*/

int SecondLargest(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax1 = Arr[0];
    int iMax2 = INT_MIN;

    if(iLength <=0)
    {   
        printf("Array is empty or size is invalid\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax1)
        {
            iMax1 = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMax1 && Arr[iCnt] > iMax2)
        {
            iMax2 = Arr[iCnt];
        }
    }
    return iMax2;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int * ptr = NULL;

    printf("Enter the size of array :");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {   
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements in array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    iRet = SecondLargest(ptr, iSize);

    printf("\n2nd Maximum element from array is : %d", iRet);

    return 0;
}