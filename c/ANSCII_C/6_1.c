#include<stdio.h>

int main()
{
    int a,b,c,d;
    float r;

    printf("Enter four integer value : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((c-d)!=0)
    {
        r=(float)(a+b)/(float)(c-d);
        printf("Ratio = %f\n",r);
    }
    return 0;
}