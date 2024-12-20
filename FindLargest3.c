/*Write a program to find largest number among the 3 numbers*/

#include<stdio.h>

int FindLarge(int iNo1, int iNo2, int iNo3)
{
    //1. Check iNo1 with iNo2 and with iNo3
    //2. if any of them is big between them then check it with iNo3
    //3. Return it as it is max

    int iTemp = 0;

    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        iTemp = iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        iTemp = iNo2;
    }
    else
    {
        iTemp = iNo3;
    }

    return iTemp;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;
    int iRet = 0;

    printf("Enter a Number 1 \n");
    scanf("%d", &iNo1);

    printf("Enter a Number 2 \n");
    scanf("%d", &iNo2);

    printf("Enter a Number 3 \n");
    scanf("%d", &iNo3);

    iRet = FindLarge(iNo1, iNo2, iNo3);

    printf("Largest Number among 3 is : %d\n", iRet);

    return 0;
}
