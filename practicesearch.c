#include<stdio.h>

int binarySearch(int A[],int l, int r,int x){
    while(l<=r){
        int m = (l+r)/2;
        if(A[m]=x){
            return m;
        }
        else if(A[m]<x){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return-1;

}
/*
int RbinarySearch(int A[],int l, int r, int x){
    if(r>=l){
        int m = (l+r)/2;

        if(A[m]=x){
            return m;
        }
        else if(A[m]>x){
            return RbinarySearch(A,l,m-1,x);
        }
        else {
            return RbinarySearch(A,m+1,r,x);
        }
    }
    return -1;
}
*/
int main(){
    /*int size;
    printf("Enter the Size = \n");
    scanf("%d",&size);

    int A[size];
    printf("Enter the number = \n");
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    */
    int A[] = {3,4,5,6,7,8,9};

    int x;
    printf("Enter the key = \n");
    scanf("%d",&x);
    int n = sizeof(A)/sizeof(A[0]);
    int result = binarySearch(A,0,n-1,x);
    if(result == -1){
        printf("Not found");
    }
    else{
        printf("", result);
    }
    return 0;
}