#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,i,mx,mn,N;
   cin>>T;
   while(T--)
   {
       cin>>N;
       int n[N];
       for(i=0;i<N;i++)
       {
           cin>>n[i];
       }
       mx=n[0];
       for(i=1;i<N;i++)
       {
           if(mx<n[i])
           {
               mx=n[i];
           }
       }
       mn=n[0];
       for(i=1;i<N;i++)
       {
           if(mn>n[i])
           {
               mn=n[i];
           }
       }
       cout<<mx-mn<<endl;
   }
   return 0;
}