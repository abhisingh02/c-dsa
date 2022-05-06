#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    int i;
    
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
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
    printf("Your link list : \n");
    display(first);


    return 0;
}