#include<stdio.h>

int SumFactors(int iNo)
{   
    int iCnt = 0;
    int iSum = 0;

    if(iNo ==1)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Factors of Numbers are : \n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            printf("%d+ ", iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number to check the factors of a number \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);

    printf("\nSummation is : %d\n", iRet);

    return 0;
}