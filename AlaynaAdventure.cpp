#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,m;
   cin>>n;
   int en[n];
   for(i=0;i<n;i++)
   {
       cin>>en[i];
   }
   m=en[0];
   for(i=1;i<n;i++)
   {
       if(m<en[i])
        m=en[i];
   }
   cout<<m<<endl;
   return 0;
}