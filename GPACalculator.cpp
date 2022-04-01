#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T,N,i,j;
  float y;
  cin>>T;
  for(j=1;j<=T;j++)
  {
      cin>>N;
      float p[N],s=0;
      for(i=0;i<N;i++)
      {
          cin>>p[i];
      }
      for(i=0;i<N;i++)
      {
          s +=p[i];
      }
      y=s/(float)N;
      cout<<"Case "<<j<<": ";
     printf("%.3f\n",y);
  }
   return 0;
}