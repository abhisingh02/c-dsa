#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
}*first=NULL;

void create(int A[],int n)
{
    struct Node *t, *last;

    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=(struct NOde *)malloc(sizeof(struct Node));
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
        printf("%d\n", p->data);
        p=p->next;
    }
}

void rdisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        rdisplay(p->next);
    }

}

int count(struct Node *p)
{
    int l=0;
    while(p!=NULL)
    {
        p=p->next;
        l++;
    }

    return l;
}

int rcount(struct Node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        return rcount(p->next)+1;
    }
}

int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s = s+p->data;
        p=p->next;
    }
    return s;
}

int rsum(struct Node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        return rsum(p->next)+p->data;
    }
}

int max(struct Node *p)
{
    int max =0;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max=p->data;
        }
        p=p->next;
    }
    return max;
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

    printf("Your link list :\n");
    rdisplay(first);

    printf("sum is %d",rsum(first));
   

    return 0;
}