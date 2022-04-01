#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,i,s,k,j,l;

    cin>>T;
    for(i=1;i<=T;i++)
    {
        k=-1;
        cin>>N;
        long long int X[N],Y[N],m=0,d;
        for(j=0;j<N;j++)
        {
            cin>>X[j]>>Y[j];
        }
        for(j=0;j<N;j++)
        {
            for(l=j+1;l<N;l++)
            {
                d=(X[l]-X[j])*(X[l]-X[j])+(Y[l]-Y[j])*(Y[l]-Y[j]);
                if(d>m)
                    m=d;
            }
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
    return 0;
}