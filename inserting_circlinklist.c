#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*head;

void create(int A[],int n)
{
    struct Node *t, *last;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(int i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t; 
    }
}

void display(struct Node *p)
{
    do
    {
        printf("%d ", p->data);
        p=p->next;

    } while (p!=head);
    
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));

    t->data=x;
    if(index==0)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=t;
        t->next=head;
        head=t;
        
    }
    else
    {
        p=head;
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
    int A[] = {3,5,7,1,9};

    create(A,5);

    Insert(head,1);

    printf("djhd\n");
    display(head);

    return 0;
}