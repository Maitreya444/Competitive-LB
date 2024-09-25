/*Given an array of +ve integers. One number 'A' from set (1,2,n) is missing and one number 'B' occurs twice in array.
Find numbers A and B.

Input arr = [2,2]
Output = [2,1]

repeating number is 2 and smallest +ve number is 1*/

#include<stdio.h>
#include<stdlib.h>

void FindMissing(int Arr[], int iLength)
{
    int iCnt = 0;
    int iVal1 = 0;
    int iVal2 = 0;
    int iDiff = 0;

    for(iCnt = Arr[iCnt]; iCnt <= iLength; iCnt++)
    {
        iVal1 = Arr[iCnt];
        iCnt++;
        iVal2 = Arr[iCnt];

        if(iVal1 == iVal2)
        {
            printf("Repeated Numbers are : %d, %d\n ", iVal1, iVal2);

            if(iCnt %2 == 0)
            {
                iDiff = iVal1 -1;
                printf("IN IF \n");
                printf("Missing number is : %d\n", iDiff);
            }
            else if(iCnt %2 !=0)
            {
                iDiff = iVal2 -1;
                printf("IN ELSE \n");
                printf("Missing number is : %d\n", iDiff);
            }
        }
        iCnt--;
    }
}

int main()
{   
    printf("Usage : [%d, %d]\n", 2,2);

    int iSize = 0;
    int iCnt = 0;
    int iNo = 0;
    int * ptr = NULL;

    printf("Enter the size of array you want \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(iSize));

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    FindMissing(ptr, iSize);

    return 0;
}