/*Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.*/
#include<stdio.h>
#include<stdlib.h>

void ReverseArray(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int *Temp = NULL;
    int iCount = 0;

    Temp = (int*)malloc(iLength* sizeof (int));

    for(iCnt = iNo+1; iCnt < iLength; iCnt++)
    {
        Temp[iCnt] = Arr[iLength -1 -iCount];
        iCount++;
    }       	

    iCount = 0;
    for(iCnt = iNo+1; iCnt <iLength; iCnt++)
    {
        Arr[iCnt] = Temp[iCnt];
        iCount++;
    }
    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int * ptr = NULL;
    int iNo = 0;

    printf("Enter the size of array :");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {   
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the number from which you want to reverse the array \n");
    scanf("%d", &iNo);

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

    ReverseArray(ptr, iSize, iNo);

    printf("Reversed Array: ");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", ptr[iCnt]);
    }
    printf("\n");;

    return 0;
}