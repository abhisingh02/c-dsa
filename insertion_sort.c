#include<stdio.h>

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void ins_sort(int A[],int n)
{
    int i,j,t=0;
    for(i=1;i<n;i++)
    {
        t=A[i];
        j=i-1;
        while(j>=0 && A[j]>t)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=t;
    }
}

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

    ins_sort(A,size);

    printf("sorted element are : \n");

    display(A,size);

    return 0;
}