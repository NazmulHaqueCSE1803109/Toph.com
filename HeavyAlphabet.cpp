#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
   int T,i,j;
   string S;
   cin>>T;
   for(i=0;i<T;i++)
   {
       vector<char> v;
       cin>>S;
       v.push_back(S[0]);
       for(j=1;j<S.size();j++)
       {
           if(S[j-1]==S[j]||S[j-1]==S[j]+32||S[j-1]==S[j]-32)
            v.push_back('#');
           else
            v.push_back(S[j]);
       }

       for(j=0;j<v.size();j++)
        cout<<v[j];
       cout<<endl;
   }
   return 0;
}