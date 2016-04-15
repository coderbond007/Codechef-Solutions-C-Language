#include <stdio.h>

int main(void) {
    int t; scanf("%d",&t);
    while(t--)
    {
        long long int n,m; scanf("%lld%lld",&n,&m);
        if(n*m==2) printf("Yes\n");
        else if((n*m)%2!=0||(n==1||m==1)) printf("No\n");
        else printf("Yes\n");
    }
	// your code goes here
	return 0;
}