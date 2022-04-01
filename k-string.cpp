#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N,K;
    cin>>N>>K;

   char str[N];
   for(int i=0;i<N;i++)
    cin>>str[i];
   int n = sizeof(str) / sizeof(str[0]);
   int index = 0;

   for (int i=0; i<n; i++) {


     int j;
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;

     if (j == i)
        str[index++] = str[i];
   }
   cout<<index-K<<endl;
   return 0;
}
