#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,A,C,i,r;
   char B;
   cin>>T;
   for(i=1;i<=T;i++)
   {
       cin>>A;
       cin>>B;
       cin>>C;
       if(B=='+')
       {
           r=A+C;
       }
       if(B=='-')
       {
           r=A-C;
       }
       if(B=='*')
       {
           r=A*C;
       }
       cout<<"Case "<<i<<": "<<r<<endl;
   }
   return 0;
}