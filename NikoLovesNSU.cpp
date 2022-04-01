#include<bits/stdc++.h>
using namespace std;

int main()
{
   int N,i,n=0,s=0,u=0,d[3];
   cin>>N;
   char c[N];
   for(i=0;i<N;i++)
   {
       cin>>c[i];
   }
   for(i=0;i<N;i++)
   {
       if(c[i]=='N')
       {
           n++;
       }
       if(c[i]=='S')
       {
           s++;
       }
       if(c[i]=='U')
       {
           u++;
       }
   }
   d[0]=n;
   d[1]=s;
   d[2]=u;
   int m=d[0];
   for(i=1;i<3;i++)
   {
       if(m>d[i])
       {
           m=d[i];
       }
   }
   cout<<m<<endl;
   return 0;
}