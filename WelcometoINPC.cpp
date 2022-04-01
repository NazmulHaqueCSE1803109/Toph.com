#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        string s;
        cin>>s;
        s[0]=s[0]-'a'+'A';
        cout<<"Welcome "<<s<<endl;
    }
    return 0;
}