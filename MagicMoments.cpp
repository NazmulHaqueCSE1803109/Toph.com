#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k,i,j,t;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<a[n-k]<<endl;
    return 0 ;
}