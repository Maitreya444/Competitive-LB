#include<stdio.h>

void DisplayFactors(int iNo)
{   
    int iCnt = 0;

    if(iNo ==1)
    {
        return;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Factors of Numbers are : \n");

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            printf("%d, ", iCnt);
        }
    }
    printf("%d", iNo);
}

int main()
{
    int iValue = 0;
    printf("Enter a number to check the factors of a number \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}