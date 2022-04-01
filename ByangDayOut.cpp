#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,a,b,c,i,s1,s2,s3;
   cin>>T;
   for(i=0;i<T;i++)
   {
       cin>>a>>b>>c;
       s1=a+b;
       s2=b+c;
       s3=a+c;
       if(s1>=c&&s2>=a&&s3>=b)
       {
           cout<<"Yes"<<endl;
       }
       else
        cout<<"No"<<endl;

   }
   return 0;
}