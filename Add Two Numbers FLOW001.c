#include<stdio.h>

main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
    	long int a,b;
    	scanf("%ld %ld",&a,&b); printf("%ld\n",a+b);
    }
}