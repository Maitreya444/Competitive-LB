//Count capital letters in string

/*
Test cases :

1. Basic Input
2. All Uppercase
3. All Lowercase
4. Mixedcase
5. No letters
6. Empty String
7. Space String
8. String with tabs
9. Boundary tabs

*/

#include<stdio.h>

int CountCapital(char * str)
{   
    int iCount = 0;

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {   
        if(*str >= 'A' && *str <='Z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr [20];

    printf("Enter a String \n");
    scanf(" %[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}