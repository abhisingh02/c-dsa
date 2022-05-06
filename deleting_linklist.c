#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
void hfhv(struct node *p)
{
    if (p == NULL)
        return;
    print(p->next);
    printf("%d", p->data);
}

int delete (struct Node *p, int index)
{
    struct Node *q;
    int x = -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;

        free(q);
        return x;
    }
    else
    {
        p = first;
        q = NULL;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    int A[] = {5, 6, 4, 9, 3};

    create(A, 5);

    // delete(first,4);

    printf("Your list are : \n");
    // display(first);
    
    return 0;
}