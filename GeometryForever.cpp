#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,i,s,c=0,k=-1,s1,s2;
    cin>>A>>B;
    s=A+B;
    int a[s-1];
    for(i=1;i<s;i++)
    {
        k++;
        a[k]=i;
    }
    for(i=0;i<=k;i++)
    {
        s1=A+a[i];
        s2=B+a[i];
        if(s1>B&&s2>A)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}