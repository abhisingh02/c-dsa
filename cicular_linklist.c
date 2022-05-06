#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head;

void create(int A[], int n)
{
    struct Node *t, *last;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    do
    {
        printf("%d ", p->data);

        p = p->next;
    } while (p != head);
}



int main()
{
    int A[] = {3, 5, 2, 9, 6};

    create(A, 5);

    display(head);

    return 0;
}