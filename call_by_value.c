#include <stdio.h>
void swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    // printf("%d\n",x);
    // printf("%d\n",y);
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b);
    printf("%d\n%d\n", a, b);
    return 0;
}