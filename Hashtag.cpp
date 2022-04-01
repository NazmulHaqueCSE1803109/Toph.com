#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    vector <char> v;
    getline(cin,s);
    int l,i;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            v.push_back(s[i]);
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;
}