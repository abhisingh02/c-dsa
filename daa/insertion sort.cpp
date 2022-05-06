#include<iostream>
using namespace std;

void insSort(int A[],int n)
{
    int i,j,t=0; 
    int s=0;
    int c=0;
    for(i=1;i<n;i++)
    {
        t=A[i];
        j=i-1;
        while(j>=0 && A[j]>t)
        {
            c++;
            A[j+1]=A[j];
            s++;
            j--;
        }
        s++;
        A[j+1]=t;
    }
    cout<<"No of comparison : "<<c<<endl;
    cout<<"no. of shift : "<<s<<endl;

}

int main()
{
    int s;
    cin>>s;

    for(int i=0;i<s;i++)
    {
        int k;
        cin>>k;
        int A[k];
        for(int j=0;j<k;j++)
        cin>>A[j];

        
        insSort(A,k);
    }
    return 0;
}