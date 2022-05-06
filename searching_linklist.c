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

struct Node * search(struct Node *p,int key)
{

    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    return 0;
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

    struct Node *temp;
    int key;
    printf("Key is : \n");
    scanf("%d", &key);
    temp=search(first,key);
    if(temp)
    {
        printf("Key is found %d", key);
    }
    else
    {
        printf("Key is not found");
    }

    return 0;
}