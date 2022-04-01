#include<stdio.h>
#include<math.h>
int main()
{
    char s[20];
    long long int n;
    int i,t;
    scanf("%d",&t);
    int ara[t];
    char command[t];
    for(i=0;i<t;i++){
        scanf(" %s",s);
        scanf("%d",&ara[i]);
        command[i]=s[0];
        //printf("%c %d\n",command[i],ara[i]);
    }
    scanf("%lld",&n);
    //printf("%lld\n",n);
    for(i=t-1;i>=0;i--){
        if(command[i]=='d') n=n*ara[i];
        else if(command[i]=='m') n=n/ara[i];
        else if(command[i]=='a') n=n-ara[i];
        else n=n+ara[i];
    }
    printf("%lld\n",n);
    return 0;
}