#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int c=0,sm=0,i;
  cin>>s;
  for(i=0;i<s.size();i++)
  {
      if(s[i]>='a'&&s[i]<='z')
      {
          sm++;
      }
      if(s[i]>='A'&&s[i]<='Z')
      {
          c++;
      }
  }
  cout<<c<<" "<<sm<<endl;
   return 0;
}