#include <stdio.h>
int main(void) 
{
    int t,i=0,c,s;
    double m,n,mul,sumofn,g;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        sumofn=0;
        mul=0;
        scanf("%d",&c);
        while(c--)
        {
            scanf("%lf %lf",&m,&n);
            if(m<40)
            {
                s++;
            }
            else if(m>=80)
            {
                mul+=n*4.00;
            }
            else if(m>=75)
            {
                mul+=n*3.75;
            }
             else if(m>=70)
            {
                mul+=n*3.50;
            }
            else if(m>=65)
            {
                mul+=n*3.25;
            }   
            else if(m>=60)
            {
                mul+=n*3.00;
            }    
            else if(m>=55)
            {
                mul+=n*2.75;
            }    
            else if(m>=50)
            {
                mul+=n*2.50;
            }
            else if(m>=45)
            {
                mul+=n*2.25;
            } 
            else if(m>=40)
            {
                mul+=n*2.00;
            }
            sumofn+=n;
        }
        if(s>0)
        {
            if(s==1)
            {
                printf("Case %d: Sorry, you have failed in 1 course!\n",++i);
            }
            else
            {
            printf("Case %d: Sorry, you have failed in %d courses!\n",++i,s);
            }
        }
        else
        {
            g=mul/sumofn;
            printf("Case %d: %.2lf\n",++i,g);
        }
    }
	return 0;
}