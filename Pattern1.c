/*
iNo = 4

      *
    * * *
  * * * * *
* * * * * * *

*/

#include<stdio.h>

void Pattern1(int iNo) 
{
    int iCnt, jCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        // Print spaces
        for (jCnt = 1; jCnt <= iNo - iCnt; jCnt++) 
        {
            printf("  "); 
        }

        // Print stars
        for (jCnt = 1; jCnt <= (2 * iCnt - 1); jCnt++) 
        {
            printf("*");
            
        }

        printf("\n"); 
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a Number \n");
    scanf("%d", &iValue);

    Pattern1(iValue);

    return 0;
}