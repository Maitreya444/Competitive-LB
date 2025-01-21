/*You are given a string 'S'. Your task is to check whether the string is palindrome or not. 
For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
Note :
String 'S' is NOT case sensitive.
Example :
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = 
“c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.*/

#include<iostream>
#include<string.h>
#include<bits/stdc++.h> 
using namespace std;

bool checkPalindrome(string str)
{
    //1. First convert entire string into small and it should be alphanumeric
    //2. Then check weather that string is palindrome or not

    //1. 
    string Lower = "";
    for (int iCnt = 0; iCnt < str.size(); iCnt++) 
    {
        if (isalnum(str[iCnt])) 
        { // Check if the character is alphanumeric
            if (str[iCnt] >= 'A' && str[iCnt] <= 'Z') 
            {
                Lower += (str[iCnt] + 32); // Convert uppercase to lowercase
            } 
            else 
            {
                Lower += str[iCnt]; // Append lowercase or numeric as is
            }
        }
    }
    //2.
    int iCnt = 0;
    int iLength = Lower.size();
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Lower[iCnt] != Lower[iLength -1 - iCnt])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "c1 O$d@eeD o1c";
    bool bRet = false;
    bRet = checkPalindrome(str);

    if(bRet == true)
    {
        cout<<"TRUE"<<"\n";
    }
    else
    {
        printf("FALSE \n");
    }
    return 0;
}