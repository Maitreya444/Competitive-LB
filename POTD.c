/*You are given a QUEUE containing ‘N’ integers and an integer ‘K’. You need to reverse the order of the first ‘K’ 
elements of the queue, leaving the other elements in the same relative order.

You can only use the standard operations of the QUEUE STL:

1. enqueue(x) : Adds an item x to rear of the queue
2. dequeue() : Removes an item from front of the queue
3. size() : Returns number of elements in the queue.
4. front() : Finds the front element.
For Example:
Let the given queue be { 1, 2, 3, 4, 5 } and K be 3.
You need to reverse the first K integers of Queue which are 1, 2, and 3.
Thus, the final response will be { 3, 2, 1, 4, 5 }. */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}NODE, *PNODE, **PPNODE;

void EnQueue(PPNODE Head, int iNo)
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

void Display(PNODE Head)
{
    printf("Elements in Queue are : \n");
    while(Head != NULL)
    {
        printf("|%d |-> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

void Reverse(PPNODE Head, int iValue)
{   
    PNODE current = *Head;
    PNODE left = NULL;
    PNODE right = NULL;

    int iCount = 0;

    while(current != NULL && iCount < iValue)
    {
        right = current -> next;
        current -> next = left;
        left = current;
        current = right;
        iCount++;
    }

    if(*Head != NULL)
    {
        (*Head) -> next = current;
    }

    *Head = left;
}

int main()
{
    PNODE First = NULL;
    int iNo = 0;

    printf("Enter a number from where you want to reverse the queue \n");
    scanf("%d", &iNo);

    EnQueue(&First, 6);
    EnQueue(&First, 5);
    EnQueue(&First, 4);
    EnQueue(&First, 3);
    EnQueue(&First, 2);
    EnQueue(&First, 1);
    Display(First);

    Reverse(&First, iNo);
    Display(First);

    return 0;
}