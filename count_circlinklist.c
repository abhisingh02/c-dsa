#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[],int n)
{
    struct Node *t,*last;

    head=(struct Node *)malloc(sizeof(struct Node));
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
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}

int count(struct Node *p)
{
    int l=0;
    do
    {
        p=p->next;
        l++;
    }while(p!=head);

    return l;
}

int main()
{
    int size;
    printf("Enter the size of array : \n");
    scanf("%d", &size);

    int A[size];
    printf("Enter the array element : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &A[i]);
    }

    create(A,size);

    printf("Number of Node is %d", count(head));

    return 0;
}