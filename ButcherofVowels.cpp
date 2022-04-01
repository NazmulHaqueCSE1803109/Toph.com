#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T,i,j,flag;
    string S;
    cin>>T;
    for(i=0;i<T;i++)
    {
        flag=0;
        cin>>S;
        for(j=0;j<S.size();j++)
        {
            if(S[j]=='a'||S[j]=='e'||S[j]=='i'||S[j]=='o'||S[j]=='u')
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}