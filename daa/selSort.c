#include<stdio.h>

void selSort(int A[],int n)
{
    int i,j,m;
    int c=0;
    int s=-1;
    for(i=0;j<n-1;i++)
    {
        m=i;
        for(i=0;i<n-1;i++)
        {
            if(A[j]<A[m])
            {
                m=j;
            }
            c++;
        }
        int t=A[m];
        A[m]=A[i];
        A[i]=t;
        s++;
    }
    printf("no of swap : ",s);
    printf("no of comp : ",c );
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",A[i]);
    }
}

int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);

    int A[size];
    printf("Enter the element : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &A[i]);
    }

    selSort(A,size);

    printf("sorted element are : \n");

    display(A,size);

    return 0;
}