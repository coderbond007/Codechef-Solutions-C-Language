#include<stdio.h>

int main(){
	int i,t,l,r;
	long long int sum2,sum1;
	scanf("%d",&t);
	while(t--){
	sum2 =0;sum1 = 0;
		scanf("%d%d",&l,&r);
		for(i=1;i<=r;i=i+2)
			sum2 = sum2 + i*(r/i);
		for(i=1;i<=l-1;i=i+2)
			sum1 = sum1 + i*((l-1)/i);
		printf("%lld\n",sum2-sum1);
	}
	return 0;
}