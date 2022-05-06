#include<iostream>
using namespace std;

void bubble(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t= A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
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
    cin>>s;

    int A[s];
    for(int i=0;i<s;i++)
    {
        cin>>A[i];
    }

    bubble(A,s);

    display(A,s);

}