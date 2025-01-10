#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> findAnagramsIndices(string str, string ptr, int n, int m) 
{
    vector<int> pCount(26, 0);
    vector<int> sCount(26, 0);
    vector<int> ans;

    // Initialize frequency count for ptr
    for(int i = 0; i < m; i++) 
    {
        pCount[ptr[i] - 'A']++;
    }

    // Initialize frequency count for the first window in str
    for(int i = 0; i < m; i++) 
    {
        sCount[str[i] - 'A']++;
    }

    // Compare frequencies for the first window
    if(sCount == pCount) 
    {
        ans.push_back(0);
    }

    // Sliding the window
    for(int i = m; i < n; i++) 
    {
        // Add new character to the window
        sCount[str[i] - 'A']++;

        // Remove the old character from the window
        sCount[str[i - m] - 'A']--;

        // Check if current window matches ptr
        if(sCount == pCount) {
            ans.push_back(i - m + 1);
        }
    }
    return ans;
}

int main() {
    string str = "cbaebabacd";
    string ptr = "abc";
    int m = str.length();
    int n = ptr.length();

    vector<int> indices = findAnagramsIndices(str, ptr, m,n);
    for (int index : indices) 
    {
        cout << index << " ";
    }

    return 0;
}