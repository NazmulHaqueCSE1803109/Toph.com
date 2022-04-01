#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,c=0;
   string s;
   cin>>s;
   for(i=0;i<s.size();i++)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
       {
           c++;
       }
   }
   cout<<c<<endl;
   return 0;
}