#include<stdio.h>

void towerofHanoi(int n,char s,char d,char a)
{
    if(n==0){
        return;
    }
    if(n>0)
    {
        towerofHanoi(n-1,s,d,a);
        printf("move disc %d from rod %d to rod %d\n",n,s,d);
        towerofHanoi(n-1,a,d,s);
    }
}

int main()
{
    int n = 4;
    towerofHanoi(n,1,2,3);
    return 0;
}