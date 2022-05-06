#include<iostream>
using namespace std;

void selSort(int A[],int n)
{
    int i,j,m;
    int c=0;
    int s=-1;
    for(i=0;j<n-1;i++)
    {
        m=i;
        for(i=0;i<n-1;i++)
        {
            if(A[j]<A[m])
            {
                m=j;
            }
            c++;
        }
        int t=A[m];
        A[m]=A[i];
        A[i]=t;
        s++;
    }
    cout<<"no of swap : "<<s<<endl;
    cout<<"no of comp : "<<c<<endl;
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}

int main ()
{
    int s;
    cout<<"Enter : "<<endl;
    cin>>s;

    int A[s];
    for(int i=0;i<s;i++)
    {
        cin>>A[i];
    }

    selSort(A,s);

    display(A,s);

}