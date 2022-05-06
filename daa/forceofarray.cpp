#include<iostream>
using namespace std;

void force()
{
    long long a,b,n,m,t;
    cin>>a>>b>>n>>m;
    long long A[m]={0};
    A[a]++;
    A[b]++;
    for(long long i=2;i<n;i++)
    {
        t=a+b;
        if(t>=m)
        {
            t=t%m;

        }
        A[t]++;
        a=b;
        b=t;
    }
    long long sum=0;
    for(long long i=0;i<m;i++)
    {
        sum=sum+A[i]*A[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        force();
    }
}