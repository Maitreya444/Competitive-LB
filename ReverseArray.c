#include<stdio.h>
#include<stdlib.h>

void ReverseArray(int Arr[], int iLength)
{
    int iCnt = 0;
    int *temp = NULL;

    temp = (int*)malloc(iLength * sizeof(int));

    if(temp == NULL)
    {
        printf("Error while allocating memory into 2nd array \n");
        return;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        temp[iCnt] = Arr[iLength -1 - iCnt];
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Arr[iCnt] = temp[iCnt];
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
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

    ReverseArray(ptr, iSize);

    printf("Reversed Array: ");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", ptr[iCnt]);
    }
    printf("\n");;

    return 0;
}