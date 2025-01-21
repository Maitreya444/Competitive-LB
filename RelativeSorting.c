/*Given two arrays ‘ARR’ and ‘BRR’ of size ‘N’ and ‘M’ respectively. Your task is to sort the elements of ‘ARR’ 
in such a way that the relative order among the elements will be the same as those are in ‘BRR’. For the elements 
not present in ‘BRR’, append them in the last in sorted order.
For example
Consider the arrays as ARR = { 9, 5, 8, 4, 6, 5 } and BRR = { 8, 4, 5 }
The output for the above example  is { 8, 4, 5, 5, 6, 9 }.
Note: Elements of ‘BRR’ are non repeating.*/

/*For test case 1:
As 8 comes first in BRR, so we first add all occurrences of 8 in ARR, in our resultant array RES. Now, RES={8} and 
ARR={9,5,4,6,5}. After 8, 4 comes in BRR, so we add all occurrences of 4 that are in ARR, in the RES array. Now, 
RES={8,4} and ARR={9,5,6,5}. After 4, 5 comes in BRR, so we add all occurrences of 5 that are in ARR, in the RES array.
Now, RES={8,4,5,5} and ARR={9,6}. Now, after processing all the elements of BRR, we will add the remaining elements 
of ARR in sorted order, in our RES array. So the final RES is {8,4,5,5,6,9}.*/

#include<stdio.h>
#include<stdlib.h>

int Compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

void RelativeSorting(int Arr1[], int Arr2[], int iLength1, int iLength2)
{
    /*Algo:
    1. The idea is to maintain a visited array of size N.
    2. Now, look for all occurrences of BRR elements one by one in ARR and mark them as visited and add them in ans array.
    3. After performing the above operation. Insert all unvisited elements of ARR into a set, if any. So that they get 
    arranged in a sorted manner.
    4. And then finally insert elements of the set into our RES array.
    */

    int iCnt = 0;
    int jCnt = 0;
    int *visited = NULL;
    int *result = NULL;
    int *notvisited = NULL;
    int resultindex = 0;
    int notvisitedIndex = 0;

    //Step 1:
    visited = (int*)malloc(iLength1 * sizeof(int));
    result = (int*)malloc(iLength1 * sizeof(int));
    notvisited = (int*)malloc(iLength1 * sizeof(int));

    //Step 2:
    //printf("Visited : \n");
    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        for(jCnt = 0; jCnt < iLength1; jCnt++)
        {
            if(Arr2[iCnt] == Arr1[jCnt])
            {
                result[resultindex++] = Arr1[jCnt];
                visited[jCnt] = 1;
                //printf("%d ", *result);
            }
        }
    }

    //Step 3:
    //printf("Not Visited : \n");
    for(jCnt = 0; jCnt < iLength1; jCnt++)
    {
        if(!visited[jCnt])
        {
            notvisited[resultindex++] = Arr1[jCnt];
        }
    }

    qsort(notvisited, notvisitedIndex, sizeof(int), Compare);

    // Step 5: Append sorted unvisited elements to result
    for (iCnt = 0; iCnt < notvisitedIndex; iCnt++) 
    {
        result[resultindex++] = notvisited[iCnt];
    }

    //Step 6:
    printf("Result \n");
    for(iCnt = 0; iCnt <resultindex; iCnt++)
    {
        printf("%d ", result[iCnt]);
    }
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int * ptr1 = NULL;
    int * ptr2 = NULL;
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;

    printf("Enter the size of array1 \n");
    scanf("%d", &iSize1);

    printf("Enter the size of array2 \n");
    scanf("%d", &iSize2);

    ptr1 = (int*)malloc(iSize1 * sizeof(int));

    printf("Enter the Elements in array1 : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d", &ptr1[iCnt]);
    }

    ptr2 = (int*)malloc(iSize2 * sizeof(int));

    printf("Enter the Elements in array2 : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d", &ptr2[iCnt]);
    }

    printf("Elements in array 1 are : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%d ", ptr1[iCnt]);
    }

    printf("\n");

    printf("Elements in array 2 are : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d ", ptr2[iCnt]);
    }

    RelativeSorting(ptr1, ptr2, iSize1, iSize2);

    return 0;
}