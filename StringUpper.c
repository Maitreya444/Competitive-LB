#include<stdio.h>

/*
Test cases:
1. Small
2. Large
3. Empty
4. More than 20
*/

void StrUprX(char * str)
{
    if(*str == '\0')
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >='A') && (*str <= 'Z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string \n");
    scanf("%19[^'\n']s", arr);

    StrUprX(arr);

    printf("Modified String is : %s", arr);

    return 0;
}