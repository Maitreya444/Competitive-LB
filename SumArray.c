/*An integer n representing the size of the sub array to consider an array of integers 

Determine the minimum sum that can be obtained by selecting any n adjacent elements in the array 

eg : 
I/p:- [3, 4, 5, 1, 2], n=3
O/p:- 1+2+3 = 6
*/

#include<stdio.h>
#include<stdlib.h>

int SumArray(int Arr[], int iSize, int iNo)
{
    //1. Sort the array
    //2. Then sum upto iNo indexes
    //3. Return the sum

    int iCnt = 0;
    int jCnt = 0;
    int temp = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        for(jCnt = 0; jCnt < iSize - iCnt -1; jCnt++)
        {
            if(Arr[jCnt] > Arr[jCnt +1])
            {
                temp = Arr[jCnt];
                Arr[jCnt] = Arr[jCnt+1];
                Arr[jCnt +1] = temp;
            }
        }
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
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

    printf("Enter the position \n");
    scanf("%d", &iValue);

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    iRet = SumArray(ptr, iSize, iValue);

    printf("Sum is : %d\n", iRet);

    return 0;
}