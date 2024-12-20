/*
Print a singly linear linked list in spiral order.
Given a linked list, the task is to print singly linked list in a spiral fashion, starting from mid land rotating
clockwise. If the linked list has even nodes, then you have to choose the left mid.

Eg : 
Input : 1-> 2-> 3-> 4-> 5-> 6
Output : 3-> 4-> 2-> 5-> 1-> 6

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof (NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Spiral(PPNODE Head)
{       
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;

    PNODE mid = *Head; //(MID)
    PNODE left = *Head; //(Left)
    PNODE right = *Head; //Right

    if(iLength %2 ==0)
    {
        while(iCnt != iLength/2 -1)
        {   
            mid = mid -> next;
            iCnt++;
        }
        printf("|%d |-> ",mid -> data);

        right = mid -> next;
        iCnt++;
        printf("|%d | ->",right -> data);
        
        while(left != mid)
        {
            left = left -> next;
        }

        while(left != *Head || right != NULL)
        {
            if(right != NULL)
            {
                right = right -> next;
                if(right != NULL)
                {
                    printf("|%d | ->", right -> data);
                }
            }

            if(left != *Head)
            {
                PNODE temp = *Head;
                while(temp -> next != left)
                {
                    temp = temp -> next;
                }
                left = temp;
                printf("|%d | ->", left -> data);
            }
        }
        printf("NULL \n");
    }
    else
    {
        printf("The list has an odd number of elements.\n");
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d |-> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 6);
    InsertFirst(&First, 5);
    InsertFirst(&First, 4);
    InsertFirst(&First, 3);
    InsertFirst(&First, 2);
    InsertFirst(&First, 1);
    Display(First);
    iRet = Count(First);
    printf("Count of elements in linked list is : %d\n", iRet);

    Spiral(&First);

    return 0;
}