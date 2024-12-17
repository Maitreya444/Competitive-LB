//Internal number < 58       = -9
//External number % 4 ==0    = -2
//Both                       = -6

#include<stdio.h>
#include<stdlib.h>

void ProcessArray(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        //Internal number and External (both)
        if(Arr[iCnt] < 58 && Arr[iCnt] %4 ==0)
        {
            Arr[iCnt] = -6;
        }

        //Internal number
        else if(Arr[iCnt] < 58)
        {
            Arr[iCnt] = -9;
        }

        //External Number
        else if(Arr[iCnt] %4 ==0)
        {
            Arr[iCnt] = -2;
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the Size of elements you want of array \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the elements in the array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        scanf("%d", &ptr[iCnt]);

        if(ptr[iCnt] < 0)
        {
            break;
        }
    }
    iSize = iCnt;

    printf("Elements in the array are \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d, ", ptr[iCnt]);
    }

    printf("\n");

    ProcessArray(ptr, iSize);

    printf("Modified \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if(ptr[iCnt] < 0)
        {
            printf(" ");
        }
        else
        {
            printf("%d ,", ptr[iCnt]);
        }
    }
    printf("\n");

    return 0;
}