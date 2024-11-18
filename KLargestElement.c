/*You are given an unsorted array containing N integers. You need to find 'k' largest element from the given array. 
Also you need to return the elements in non decresing order
eg:- 
I/P : [3,4,2,1]
O/P : [3,4]
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void KElements(int Arr[], int iLenght, int iNo)
{
    //1. Sort the array
    //2. Find Max and 2nd Max
    //3. Print them

    int iCnt = 0;
    int jCnt = 0;
    int temp = 0;

    int iMax1 = Arr[0];
    int iMax2 = INT_MIN;

    printf("\n");

    //1. Sorting (Bubble Sort)
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        for(jCnt = 0; jCnt < iLenght -1 - iCnt; jCnt++)
        {
            if(Arr[jCnt] > Arr[jCnt +1])
            {
                temp = Arr[jCnt];
                Arr[jCnt] = Arr[jCnt +1];
                Arr[jCnt + 1] = temp;
            }
        }
        printf("%d ", Arr[iCnt]);
    }

    //2. Finding Max and 2nd Max
    iMax1 = Arr[iLenght -1];

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt] < iMax1 && Arr[iCnt] > iMax2)
        {
            iMax2 = Arr[iCnt];
        }
    }

    //3. Printing k values
    printf("K values are  : \n");
    printf("%d ", iMax1);
    printf("%d ", iMax2);
}

int main()
{

    int iSize = 0;
    int iCnt = 0;
    int * ptr = NULL;
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

    printf("Enter the value of k \n");
    scanf("%d", &iValue);

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    KElements(ptr, iSize, iValue);

    return 0;
}