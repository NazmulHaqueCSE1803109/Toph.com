#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int N,i,j;
    string s;
    vector<char> v;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            v.push_back(s[j]);
        }
    }
    for(i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}