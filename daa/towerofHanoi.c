#include<stdio.h>

void towerpfHanoi(int n,char s,char d,char a)
{
    if(n==0)
    {
        return;
    }
    if(n>0)
    {
        towerpfHanoi(n-1,s,d,a);
        printf("Move disc %d from rod %c to rod %c\n",n,s,d);
        towerpfHanoi(n-1,a,d,s);
    }
}

int main()
{
    towerpfHanoi(6,'S','D','A');
    return 0;
}