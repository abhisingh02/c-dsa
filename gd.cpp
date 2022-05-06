#include<iostream>
using namespace std;

void towerofHanoi(int n,char s,char d,char a)
{
    if(n==0){
        return;
    }
    if(n>0)
    {
        towerofHanoi(n-1,s,d,a);
        cout<<"move disc "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        towerofHanoi(n-1,a,d,s);
    }
}
int main()
{
    int n = 4;
    towerofHanoi(n,'A','B','C');
    return 0;
}