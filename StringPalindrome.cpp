#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkPalindrome(string str)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < str.length()/2; iCnt++)
    {
        if(str[iCnt] != str[str.length() -iCnt - 1])
        {
            return FALSE;
        }
    }
    return TRUE;
}

int main()
{
    string test1 = "abccba";
    BOOL bRet = FALSE;
    bRet = ChkPalindrome(test1);

    if(bRet == TRUE)
    {
        printf("A Palindrome \n");
    }
    else
    {
        printf("Not a Palindrome \n");
    }

    return 0;
}