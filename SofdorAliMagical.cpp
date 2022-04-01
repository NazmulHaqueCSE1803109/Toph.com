#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,i,j;
   long long int A,B,s;
   cin>>T;
   for(i=0;i<T;i++)
   {
       cin>>A>>B;
       s=0;
       for(j=0;j<B;j++)
       {
           s +=A;
       }
       cout<<s<<endl;
   }
   return 0;
}