#include<iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int i,l,sm=0,c=0,d=0,p=0;
        l=s.size();
        for(i=0;i<l;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                sm++;

            if(s[i]>='A'&&s[i]<='Z')
                c++;
            if(s[i]>='0'&&s[i]<='9')
                d++;
            if(sm>=1&&c>=1&&d>=1)
            {
                p++;
                sm=0;
                c=0;
                d=0;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}