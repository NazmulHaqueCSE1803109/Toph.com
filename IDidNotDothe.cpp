#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,d,flag=0;
   cin>>n;
   if(n==1)
    flag=0;
   if(n==2||n==3)
   {
       flag=1;
   }
   if(n>3)
   {
       d=n/2;
       for(i=2;i<=d;i++)
       {
           if(n%i!=0)
           {
               flag=1;
           }
           else
           {
               flag=0;
               break;
           }
       }
   }
   if(flag)
    cout<<"NO PUNISHMENT"<<endl;
   else
   {
       for(i=1;i<=n;i++)
       {
           cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
       }
   }
   return 0;
}