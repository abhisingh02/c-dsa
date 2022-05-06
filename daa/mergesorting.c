#include<stdio.h>
void merge(int A[],int l,int m,int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=A[l+i];

    }
    for(j=0;j<n2;j++)
    {
        R[j]=A[m+1+j];
    }
    i=0;
    j=0;
    k=1;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(i<n2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;

        mergeSort(A,l,m);
        mergeSort(A,m+1,r);
        merge(A,l,m,r);
    }
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
    int s;
    printf("Enter the size of array : \n");
    scanf("%d", &s);

    int A[s];
    printf("Enter the array element : \n");
    for(int i=0;i<s;i++)
    {
        scanf("%d", &A[i]);
    }
  
    mergeSort(A,0,s-1);
  
    printf("\nSorted array is \n");
    display(A,s);
    return 0;
}