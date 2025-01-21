#include<stdio.h>

void RotateRightOnce(int arr [], int iLength)
{
    int temp = arr[iLength -1];
    int iCnt = 0;

    for(iCnt = (iLength -2); iCnt >=0; iCnt --)
    {   
        printf("iLength: %d, iCnt: %d\n", iLength, iCnt);
        //printf("iLenght -2: %d ", iCnt);
        //printf("Upper : ");
        //printf("%d\n", iCnt);
        arr[iCnt + 1];
        printf("Lower : ");
        printf("%d\n", iCnt +1);
        arr[iCnt + 1] = arr[iCnt];
    }
    arr[0] = temp;
}

int main()
{
    int a1[] = {1,2,3,4,5,6,7,8};

    int iCnt = 0;
    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d ", a1[iCnt]);
    }
    printf("\n");

    RotateRightOnce(a1, 8);

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        printf("%d ", a1[iCnt]);
    }
    printf("\n");

    return 0;
}