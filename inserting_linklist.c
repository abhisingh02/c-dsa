#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*first=NULL;

void create(int A[],int n)
{
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t; 
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));

    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        p=first;
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int main()
{
    int size;
    printf("Enter the size of array : \n");
    scanf("%d", &size);

    int A[size];
    printf("Enter the number : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &A[i]);
    }

    create(A,size);

    insert(first,3,10);

    printf("Your list are : \n");
    display(first);

    return 0;
}