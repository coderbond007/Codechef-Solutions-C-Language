#include<stdio.h>

int main(void)
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        c=1;
        b=0;
    	while(a/c>0)
        	{
        		c=c*5;
        		b=b+(a/c);
        	}
        	printf("%d\n",b);
    }
        return 0;
}