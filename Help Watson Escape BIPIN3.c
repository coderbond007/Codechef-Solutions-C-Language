#include<stdio.h>
#define max 1000000007

long long int power(long long int x,long long int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2)%max;
    if (y%2 == 0)
        return (temp*temp)%max;
    else
        return (((x*temp)%max)*temp)%max;
}
int main()
{
int t;scanf("%d",&t);
while(t--)
{       long long int n,k,ans;
        scanf("%lld%lld",&n,&k);
        if(n==1 && k==1)
                printf("1\n");
        else if(k==1)
                printf("0\n");
        else
        {       ans=(k*(power(k-1,n-1)%max))%(max);
                printf("%lld\n",ans);
        }
}
return 0;
}