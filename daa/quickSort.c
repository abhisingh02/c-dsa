#include<stdio.h>

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int A[],int l,int r)
{
    int pivot = A[r];
    int i = (l-1);

    for(int j = l;j<r-1;j++)
    {
        if(A[j]<pivot)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[r]);
    return (i+1);
}

void quickSort(int A[],int l,int r)
{
    if(l<r)
    {
        int p=partition(A,l,r);
        quickSort(A,l,p-1);
        quickSort(A,p+1,r);
    }
}

void display(int A[],int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d ",A[i]);
    }
}

int main()
{
    int s;
    printf("Enter the size of array : \n");
    scanf("%d", &s);

    int A[s];
    printf("Enter the array element : \n");
    for(int i=0;i<s;i++)
    {
        scanf("%d", &A[i]);
    }
  
    quickSort(A,0,s-1);
  
    printf("\nSorted array is \n");
    display(A,s);
    return 0;
}