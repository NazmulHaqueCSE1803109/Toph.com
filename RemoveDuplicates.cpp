#include<iostream>
using namespace std;
int main()
{
    string s,b;
    int T,o,i,c,j,flag;
    cin>>T;
    for(o=1;o<=T;o++)
    {
        cin>>s;
    int l=s.size(),m=-1;

    for(i=0;i<l;i++)
    {
        flag=0;
        if(i==0)
        {
            m++;
            b[m]=s[i];
        }
        else
        {
            for(j=m;j>=0;j--)
            {
                if(s[i]!=b[j])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            m++;
            b[m]=s[i];
        }
    }
    cout<<"Case #"<<o<<":"<<endl;
    for(i=0;i<=m;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(b[i]==s[j])
                c++;

        }
        cout<<b[i]<<" "<<c<<endl;
    }
}
return 0;
}