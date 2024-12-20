/* Given an array arr[] of size n, find the max of min for every window size in the given array. The window size 
varies from size 1 to n 

eg : Arr = [3,1,4,6], window size = 2
[3,1], [1,4], [4,6] 
1       1       4
Max of them is 4.
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int WindowArray(int Arr[], int iLength, int iNo)
{
    //1. Divide the array into window of iNo times.
    //2. Find the min element from those windows.
    //3. Find max element from them

    int iCnt = 0;
    int iMax = INT_MIN;
    int iMin = 0;
    int jCnt = 0;

    for(iCnt = 0; iCnt <= iLength - iNo; iCnt++)
    {   
        iMin = INT_MAX;

        for(jCnt = iCnt; jCnt < iCnt + iNo; jCnt++)
        {
            if(Arr[jCnt] < iMin)
            {
                iMin = Arr[jCnt];
            }
        }

        if(iMin > iMax)
        {
            iMax = iMin;
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int * ptr = NULL;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the window size \n");
    scanf("%d", &iValue);

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    iRet = WindowArray(ptr, iSize, iValue);

    printf("Max is : %d\n", iRet);

    return 0;
}