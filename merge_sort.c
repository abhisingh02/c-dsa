#include<stdio.h>

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void merge_sort()

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
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

    quick_sort(A,size);

    printf("sorted element are : \n");

    display(A,size);

    return 0;
}