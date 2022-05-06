#include<iostream>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        long long arr[n],target;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        cin>>target;
        bool ans = false;
        int low=0,high=n-1,comp=0;

        while(low<=high)
        {
            int m = (low+high)/2;
            if(arr[m]==target)
            {
                ans=true;
                comp++;
                break;
            }
            else if(arr[m]<target)
            {
                low=m+1;
            }
            else
            {
                high=m-1;
            }
            comp++;
        }
        if(ans)
        {
            cout<<"YES"<<comp<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}