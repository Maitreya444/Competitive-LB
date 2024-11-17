//String Reverse

/*
Test cases :
1. Basic Input
2. Input with space
3. Numbers/Special characters
4. Single char
5. Empty string
*/

#include<stdio.h>

void Reverse(char * str)
{
    if(*str == '\0')
    {
        return;
    }

    char * end = str;
    char * start = str;
    char Temp = '\0';

    //1. Go to the end of string
    while(*end != '\0')
    {
        end++;
    }
    end--;

    //2. Now reverse loop and replace the values
    while(start < end)
    {
        Temp = *start;
        *start = *end;
        *end  = Temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string \n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    printf("Reverse String is : %s", arr);

    return 0;
}