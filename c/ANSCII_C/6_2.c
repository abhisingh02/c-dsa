#include<stdio.h>

int main()
{
    int c=0;
    float w,h;

    printf("Enter the weight and height for 10 boys\n");

    for(int i=0;i<10;i++)
    {
        scanf("%f %f",&w,&h);
        if(w<50 && h>170)
        {
            c = c+1;
        }
    }
    printf("Number of boys whose weight < 50 and hight > 170cm. =", c);

}