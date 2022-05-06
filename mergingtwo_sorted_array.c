#include <stdio.h>

int main()
{
    
    int s1,s2,s3;
    printf("\nEnter the size of first array ");
    scanf("%d",&s1);
    printf("\nEnter the size of second array ");
    scanf("%d",&s2);
    
    s3=s1+s2;
    printf("\nEnter the sorted array elements");
    int a[s1],b[s2],c[s3];
    for(int i=0;i<s1;i++)
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=s1;
    printf("\nEnter the sorted array elements");
    for(int i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nThe merged array..\n");
    for(int i=0;i<s3;i++)
    {
        printf("%d ",c[i]);
    }
    
    printf("\nAfter sorting...\n");
    for(int i=0;i<s3;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<s3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }   
    
    for(int i=0 ; i<s3 ; i++)       //Print the sorted Array 
    {
        printf(" %d ",c[i]);
    }
    return 0;   
}