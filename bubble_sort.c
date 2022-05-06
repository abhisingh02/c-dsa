#include<stdio.h>



void bubble_sort(int A[],int n)
{
    int i,j,t=0;
    int c=0;
    int s=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                c++;
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
                s++;
            }
            s++;

        }
    }
    printf("no of swap : %d\n",s);
    printf("no of comp : %d\n",c );
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
    //printf("Enter the size of array : \n");
    scanf("%d", &size);

    int A[size];
    //printf("Enter the array element : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &A[i]);
    }

    bubble_sort(A,size);

    printf("sorted element are : \n");

    display(A,size);

    return 0;
}