#include<stdio.h>
#include<stdlib.h>

int sortBinaryArray(int arr[], int n)  
{
	int iCnt = 0;
	int dest = 0;
	int iCount = 0;

	for(iCnt = 0; iCnt < n; iCnt++)
	{
		if(arr[iCnt] == 1)
		{
			iCount++;
			arr[iCnt] = 0;
		}
	}

	dest = n-iCount;

	for(iCnt = dest; iCnt < n; iCnt++)
	{
		arr[iCnt] = 1;
	}

	return arr;
}

int main()
{
    int iSize = 0;
    int * ptr = NULL;
    int iNo = 0;
    int iCnt = 0;

    printf("Enter the number of elements you want to enter \n");
    scanf("%d", &iSize);

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

    sortBinaryArray(ptr,iSize);

    printf("Binary array after sorted is %d\n", ptr);

    free(ptr);
    return 0;
}