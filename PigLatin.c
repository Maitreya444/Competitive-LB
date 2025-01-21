//Input : LONDON, OLYMPICS
//OUTPUT : ONDONLAY, OLYMPICSAY

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void PigLatin(char *str)
{
    //1. Travel Until you find any vowel and while traveling remove the char
    //2. If vowel found then stop and go to the last char and join the removed chars + ay

    char temp [20];
    char result [20];
    int iCnt = 0;
    int jCnt = 0;

    //1. Check vowels
    while(str[iCnt] != '\0' && str[iCnt] != 'a' && str[iCnt] != 'e' && str[iCnt] != 'i' && str[iCnt] != 'o' && str[iCnt] !='u' && str[iCnt] != 'A' && str[iCnt] != 'E' && str[iCnt] !='I' && str[iCnt] != 'O' && str[iCnt] != 'U')
    {   
        temp[jCnt++] = str[iCnt];
        iCnt++; 
    }

    temp[jCnt] = '\0';
    
    if(str[iCnt] == '\0')
    {
        printf("Vowel is not present in the string \n");
        return;
    }

    strcpy(result, &str[iCnt]);
    strcat(result, temp);
    strcat(result, "ay");

    printf("String after modify is : %s\n");
    strcpy(str, result);
}

int main()
{
    char arr[20];

    printf("Enter a string \n");
    scanf("%[^'\n']s", arr);

    PigLatin(arr);

    printf("PigLatin String is : %s", arr);

    return 0;
}