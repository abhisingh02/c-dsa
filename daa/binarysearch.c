#include<stdio.h>

int binarysearch(int A[],int l,int r,int x)
{
    while(l<=r)
    {
        int m = (l+r)/2;
        if(A[m]==x){
            return m;
        }
        if(A[m]<x)
        {
            l=m+1;

        }
        else
        {
            r=m-1;
        }
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
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
        int x;
        printf("Enter thr key = ");
        scanf("%d",&x);
        int result = binarysearch(A,0,size-1,x);
        if(result == -1){
            printf("Not found");
        }
        else{
            printf("%d  %d",x,result);
        }
    }
}