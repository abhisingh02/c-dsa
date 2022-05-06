#include<stdio.h>
void bubbleSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
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
    int A[] = {5,2,9,6,1,7};
    int size = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,size);
    display(A,size);
}