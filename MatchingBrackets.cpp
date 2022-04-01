#include<bits/stdc++.h>
using namespace std;

int main()
{
   stack<char>st;
   string s;
   cin >> s;
   bool a=1;
   int n=0;
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]),n++;
      else
      {
         if(st.empty())
         {
            a=0;
            break;
         }
         char c=st.top();
         st.pop();
         if(s[i]==')')
            if(c!='(')
         {
            a=0;
            break;
         }
         if(s[i]=='}')
            if(c!='{')
         {
            a=0;
            break;
         }
         if(s[i]==']')
            if(c!='[')
         {
            a=0;
            break;
         }
      }
   }
   if(n==s.length())
      a=0;
   if(a) cout << "Yes\n";
   else cout << "No\n";
}