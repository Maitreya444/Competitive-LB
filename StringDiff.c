/*Write a program which accept string from user and return difference between frequency of small characters and frequency
capital characters */

/*
Test cases :

1. Small only
2. Big only
3. Both same
4. Empty String
5. Space String
6. Numbers
7. Special characters

*/

#include<stdio.h>

int Difference(char * str)
{
    int SmalliCnt = 0;
    int BigiCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            BigiCnt++;
        }
        else if (*str >= 'a' && *str <='z')
        {
            SmalliCnt++;
        }
        str++;
    }

    return SmalliCnt - BigiCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}