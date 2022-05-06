#include<stdio.h>

void bubbleSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t= A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&A[i]);
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

    bubbleSort(A,size);

    printf("sorted element are : \n");

    display(A,size);

    return 0;
}