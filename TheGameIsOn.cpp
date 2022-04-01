#include <bits/stdc++.h>
using namespace std;

int main() {

    int T,N,i,j,w,d;
    cin>>T;
    while(T--)
    {
        cin>>N;
        char S[N],ch;
        for(i=0;i<N;i++)
            cin>>S[i];
        w=0;d=0;
        for(i=0;i<N;i++)
        {
            if(S[i]=='0')
            {
                w++;
                if(S[i]='0'&&S[i+1]=='1')
                {
                    if(w%2!=0)
                    {
                        d++;w=0;
                    }
                }
            }
        }
        cout<<d<<endl;
    }
    return 0 ;
}