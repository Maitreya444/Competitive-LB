#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Fibo(int iNo)
{
    if(iNo == 0 || iNo == 1 || iNo == 2)
    {
        return TRUE;
    }

    int iCnt = 0;
    int iPrev = 1;
    int iCurr = 2;
    int iNext = 0; 

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iCurr== iNo)
        {
            return TRUE;
        }

        iNext = iCurr+ iPrev;
        iPrev = iCurr;
        iCurr = iNext;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    bRet = Fibo(iValue);

    if(bRet == TRUE)
    {
        printf("TRUE \n");
    }
    else
    {
        printf("FALSE \n");
    }

    return 0;
}