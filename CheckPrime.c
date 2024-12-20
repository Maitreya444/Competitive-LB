//Write a program to find wheather a number is prime or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkPrime(int iNo)
{
    //A prime number is something which is only divisible by itself eg 5,7,11 etc

    //1. Start for loop from 2nd iteration.
    //2. iNO/2 in loop so that prime condition is never fulfilled
    //3. return flag

    int iCnt = 0;
    BOOL bFlag = TRUE;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = FALSE;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    bRet = ChkPrime(iValue);

    if(bRet == TRUE)
    {
        printf("It's a prime Number \n");
    }
    else
    {
        printf("It's not a prime number \n");
    }

    return 0;
}