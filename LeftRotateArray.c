#include<stdio.h>
#include<stdlib.h>

void LeftRotationArray(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int jCnt = 0;
    int Temp[iLength];

    int iResult = iLength - iNo;

    for(iCnt = iNo; iCnt < iLength; iCnt++)
    {
        Temp[iCnt - iNo] = Arr[iCnt];
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        Temp[iLength - iNo + iCnt] = Arr[iCnt];
    }

    printf("Rotation : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Arr[iCnt] = Temp[iCnt];
        printf("%d ", Arr[iCnt]);
    }
}

int main()
{
    int iSize = 0;
    int * ptr = NULL;
    int iNo = 0;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter \n");
    scanf("%d", &iSize);

    printf("Enter the value of k \n");
    scanf("%d", &iNo);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("\n");

    printf("Elements are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", ptr[iCnt]);
    }
    printf("\n");

    LeftRotationArray(ptr,iSize,iNo);

    free(ptr);
    return 0;
}