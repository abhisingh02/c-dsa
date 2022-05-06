#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*first=NULL, *second=NULL, *third=NULL;

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

void create2(int A[],int n)
{
    struct Node *t, *last;

    second = (struct Node *)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;

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

void concate(struct Node *p,struct Node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}

int main()
{
    int A[] = {5,6,4,9,3};
    int B[] = {2,8,1,10,7};

    create(A,5);
    create2(B,5);

    concate(second,first);

    printf("concatination\n");
    display(third);
    
    return 0;
}