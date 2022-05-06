#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void insert(int key)
{
    struct Node *t, *r, *p;
    t=root;
    r=NULL;

    if(root==NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=0)
    {
        r=t;
        if(key<t->data)
        {
            t = t->lchild;
        }
        else if(key>t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }
    }

    p = (struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data)
    {
        r->lchild=p;
    }
    else
    {
        r->rchild=p;
    }
}

void postorder(struct Node *p)
{
    if(p)
    {
        
        postorder(p->lchild);
        
        postorder(p->rchild);
        printf("%d ", p->data);
    }
}

int main()
{

    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);

    postorder(root);
}