#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle b1)
{
    return b1.length*b1.breadth;
}
int main()
{
    struct Rectangle b1 = {10,5};
    printf("%d",area(b1));
    return 0;
}