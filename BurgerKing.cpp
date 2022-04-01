#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c,tc=1;
    int n, arr[105],k,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>b;
        c=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(k==1)
        {
            for(int j=0;j<n;j++)
            {
                if(b==arr[j])
                    c++;
            }
        }
        else if(k==2)
        {
            for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
            {
                if(i==j)
                    continue;
                else if(b==(arr[i]+arr[j]))
                    c++;
            }
        }
        else if(k==3)
        {
            for(int p=0;p<n;p++)
            for(int i=p;i<n;i++)
            for(int j=i;j<n;j++)
            {
                if(i==j || i==p)
                    continue;
                else if(b==(arr[i]+arr[j]+arr[p]))
                    c++;
            }
        }
        cout<<"Case "<<tc<<": "<<c<<endl;
        tc++;

    }
}