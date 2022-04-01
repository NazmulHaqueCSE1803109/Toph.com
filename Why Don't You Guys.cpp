#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,X,i,s=0,a;
   cin>>n>>X;
   for(i=0;i<n;i++)
   {
       cin>>a;
       s +=a;
   }
   if(s>X)
   {
       cout<<"Yes"<<endl;
   }
   else
    cout<<"No"<<endl;
   return 0;
}