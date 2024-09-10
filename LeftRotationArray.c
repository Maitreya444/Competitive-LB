/*Given an array of size n and multiple values around which we need to left rotate the array

Input : 5
1 3 5 7 9
k : 1
Output : 3 5 7 9 1

*/

#include<stdio.h>
#include<stdlib.h>

void LeftRotationArray(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iTemp1 = 0;
    int iCnt2 = 0;
    int iTemp2 = 0;

    printf("Output is : \n");

    if(Arr[iCnt] != '\0')
    {
        for(iCnt = iNo ; iCnt < iLength; iCnt++)
        {
            //if(Arr[iCnt] != '\0')
            {
                iTemp1 = Arr[iCnt];
                printf("%d ", iTemp1);
            }
        }
    }
    for(iCnt = 0; iCnt <iNo; iCnt++)
    {
        iTemp2 = Arr[iCnt];
        printf("%d ", iTemp2);
    }

}

int main()
{
    int iSize = 0;
    int * ptr = NULL;
    int iNo = 0;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter \n");
    scanf("%d", &iSize);

    printf("Enter the value of k \n");
    scanf("%d", &iNo);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("\n");

    printf("Elements are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", ptr[iCnt]);
    }
    printf("\n");

    LeftRotationArray(ptr,iSize,iNo);

    free(ptr);
    return 0;
}