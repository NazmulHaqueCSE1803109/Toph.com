#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,i,n,d[3],m,ind,j,flag;
   cin>>T;
   char c[3];
   c[0]='A';c[1]='B';c[2]='C';
   for(i=1;i<=T;i++)
   {
       for(j=0;j<3;j++)
       {
           cin>>n;
           d[j]=n;
       }
       m=d[0];
       ind=0;
       for(j=1;j<3;j++)
       {
           if(m<d[j])
           {
               m=d[j];
               ind=j;
           }
       }
       flag=0;
       for(j=0;j<3;j++)
       {
           if(d[j]==m)
           {
               flag++;
           }
       }
       if(flag==1)
        cout<<"Case "<<i<<": "<<c[ind]<<endl;
       else
        cout<<"Case "<<i<<": "<<"Confused"<<endl;
   }
   return 0;
}