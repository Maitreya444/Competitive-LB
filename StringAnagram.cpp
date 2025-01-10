#include<iostream>
#include<algorithm>
using namespace std;

bool ChkAnagram(string str1, string str2)
{
    if(str1.length() != str2.length())
    {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
    {
        return true;
    }

    return false;
}

int main()
{
    string test1 = "silent";
    string test2 = "listef";
    bool bRet = false;

    bRet = ChkAnagram(test1, test2);

    if(bRet == true)
    {
        printf("YES Anagram \n");
    }
    else
    {
        printf("NO Anagram \n");
    }

    return 0;
}

/*vector<int> result;
    int m = str.size();
    int n = ptr.size();

    if (n > m) return result; // If pattern is longer than the string, no matches are possible.

    string sortedPtr = ptr;
    sort(sortedPtr.begin(), sortedPtr.end()); // Sort the pattern once.

    for (int i = 0; i <= m - n; i++) {
        string temp = str.substr(i, n); // Extract substring of length n from the main string.
        sort(temp.begin(), temp.end()); // Sort the substring.

        if (temp == sortedPtr) { // Compare the sorted substring with sorted pattern.
            result.push_back(i);
        }
    }

    return result;*/

/*#include <vector>
#include <string>
#include <algorithm>

vector<int> findAnagramsIndices(string str, string ptr, int n, int m)
{   
    vector<int> result;

    //1. Sort the strings.
    //2. Compare strings wrt ptr's length.
    //3. Return the indices which are an anagram.

    //CBAEBABACD
    //ABC

    if (n > m) return result;

    int iCnt = 0;

    string sortedPtr = ptr;
    sort(sortedPtr.begin(), sortedPtr.end());

    for(iCnt = 0; iCnt <= m-n; iCnt++)
    {        
        string temp = str.substr(iCnt, n);
        sort(temp.begin(), temp.end());

        if(temp == ptr)
        {
            result.push_back(iCnt);
        }
        
    }
    return result;
}*/