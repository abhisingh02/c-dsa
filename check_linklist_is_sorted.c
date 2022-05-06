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
        printf("%d\n",p->data);
        p=p->next;
    }
}
int isSorted(struct Node *p)
{
    int x=0;
    p=first;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;

}

int main()
{
    int A[] = {5,6,4,9,3};

    create(A,5);

    printf("%d\n",isSorted(first));


    return 0;
}