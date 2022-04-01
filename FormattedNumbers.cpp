#include<bits/stdc++.h>
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
#define sync                  ios_base::sync_with_stdio(false);
#define fastin                cin.tie(0);
#define fastout               cout.tie(0);

using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s.size()<=3)cout<<s<<endl;

    else if(s.size()<=6){
        if(s.size()==6){
            cout<<s[0]<<s[1]<<s[2]<<","<<s[3]<<s[4]<<s[5]<<endl;
        }
        else if(s.size()==5){
            cout<<s[0]<<s[1]<<","<<s[2]<<s[3]<<s[4]<<endl;
        }
        else{
            cout<<s[0]<<","<<s[1]<<s[2]<<s[3]<<endl;

        }
    }

    else{
               if(s.size()==9){
            cout<<s[0]<<s[1]<<s[2]<<","<<s[3]<<s[4]<<s[5]<<","<<s[6]<<s[7]<<s[8]<<endl;
        }

      else if(s.size()==8){
            cout<<s[0]<<s[1]<<","<<s[2]<<s[3]<<s[4]<<","<<s[5]<<s[6]<<s[7]<<endl;
        }
        else{
                        cout<<s[0]<<","<<s[1]<<s[2]<<s[3]<<","<<s[4]<<s[5]<<s[6]<<endl;

        }

    }
}