#include<stdio.h>
#define bool int
bool luckyNo(int n)
{
    int c=2;
    if(c>2)
    {
        return 1;
    }
    if(n%c==0)
    {
        return 0;
    }
    int next_pos = n-(n/2);
    c++;
    return luckyNo(next_pos);

}

int main()
{
    int x=5;
    if(luckyNo(x))
    {
        printf("Lucky no, if found ");
    }
    else
    {
        printf("Not found");
    }
}