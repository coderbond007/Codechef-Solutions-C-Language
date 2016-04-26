#include<stdio.h>

int main (void)
{
int t;
scanf("%d",&t);
while(t--)
	{
	unsigned long long int n; scanf("%lld",&n);
	printf("%llu\n",n/2+1);
	}
}