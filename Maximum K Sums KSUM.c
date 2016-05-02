#include<stdio.h>
long long a[100001],p[100001],w[100001];
int main()
{
	int t,n,k,i,j;
		scanf("%d%d",&n,&k);
		long long s=0;
		for(i=1;i<=1e5;i++)
		{
			scanf("%lld",&a[i]);
			p[i]=p[i-1]+a[i];
		}
		long long m=n;
		for(i=1;i<=k;i++)
		{
			long long m=n;
			for(j=n;j>=1;j--)
			{
				if(p[j]-p[w[j]]>p[m]-p[w[m]])
				{
					m=j;
				}
				if(w[j]==0)
				break;
			}
			printf("%lld ",p[m]-p[w[m]]);
			w[m]++;
		}
}