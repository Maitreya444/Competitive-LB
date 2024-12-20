//Series of numbers where each number is sum of two preceding numbers
// 0, 1, 1, 2, 3, 5, 8, 13, 21
#include<stdio.h>

void Fibo(int iNo)
{   
    //1. Save previous value
    //2. Save current value
    //3. Add them

    int iCnt = 0;
    int iPrev = 0;
    int iCurr = 1;
    int iAns = 0;

    printf("%d %d ", iPrev, iCurr);

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        iAns = iCurr + iPrev;
        printf("%d ", iAns);
        iPrev = iCurr;
        iCurr = iAns;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a Number \n");
    scanf("%d",&iValue);

    Fibo(iValue);

    return 0;
}