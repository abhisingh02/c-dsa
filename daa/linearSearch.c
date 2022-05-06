#include<stdio.h>

int linearSearch(int A[],int n,int key)
{
    //int c = 1;
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
        //c++;
    }
    printf("no of comp = %d",c);
    return -1;
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
    int key;
    printf("Enter thr key = ");
    scanf("%d",&key);
    int result = linearSearch(A,size,key);
    if(result == -1){
        printf("Not found");
    }
    else{
        printf("found");
    }

    return 0;
}

