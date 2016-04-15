#include<stdio.h>
#define MAX 100000

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i, j, n, count[MAX]={0};
        long long arr[MAX];
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%lld", &arr[i]);
        count[n-1]=1;
        for(i=(n-2); i>=0; i--)
        {
           if((arr[i]*arr[i+1])<=0)
               count[i]=count[i+1]+1;
           else
               count[i]=1;
        }
        for(i=0; i<n; i++)
        {
            printf("%d", count[i]);
            printf(" ");
        }
        printf("\n");
    }
}