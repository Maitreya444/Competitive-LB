#include<stdio.h>
#include<stdlib.h>

int findDuplicate(int arr[], int iLength) 
{
    /*int iCnt = 0;
    int jCnt = 0;
    int iResult = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        for(jCnt = iCnt + 1; jCnt < iLength; jCnt++)
        {
            if(arr[iCnt] == arr[jCnt])
            {
                iResult = arr[iCnt];
                return iResult;
            }
        }  
    }
    return -1;*/

    int slow = arr[0];
    int fast = arr[0];

    // Step 1: Detecting the cycle
    do 
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Step 2: Finding the entry point of the cycle
    slow = arr[0];
    while (slow != fast) 
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow; // The duplicate
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int * ptr = NULL;

    printf("Enter the size of array :");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {   
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the elements in array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements in array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)\
    {
        printf("%d ", ptr[iCnt]);
    }

    iRet = findDuplicate(ptr, iSize);

    printf("Duplicate element from array is : %d", iRet);

    return 0;
}
