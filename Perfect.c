/*A perfect number is a positive integer that is equal to the sum of its positive proper divisors, which are its 
divisors excluding the number itself. 

Example: 6 is a perfect number because 1 + 2 + 3 = 6.

How to find a perfect number: To determine if a number is perfect, write down all of its possible divisors 
(excluding the number itself) and add them together. If the sum of the divisors is equal to the original number, 
then that number is perfect. */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    int bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d", &iValue);

    bRet = ChkPerfect(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Perfect Number", iValue);
    }
    else
    {
        printf("%d is not a Perfect Number", iValue);
    }

    return 0;
}