#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i,flag=0;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"No change needed"<<endl;
    else
        cout<<"Change needed"<<endl;
    return 0 ;
}