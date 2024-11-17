#include<stdio.h>
#include<stdlib.h>

void bubbleSortArray(int Arr[], int iSize)
{
    int iCnt = 0;
    int jCnt = 0;
    int temp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        for(jCnt = 0; jCnt < iSize - iCnt -1; jCnt++)
        {
            if(Arr[jCnt] > Arr[jCnt+1])
            {
                temp = Arr[jCnt];
                Arr[jCnt] = Arr[jCnt+1];
                Arr[jCnt+1] = temp;
            }
        }
    }

    printf("\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", Arr[iCnt]);
    }
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

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    bubbleSortArray(ptr, iSize);

    return 0;
}