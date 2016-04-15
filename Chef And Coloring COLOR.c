#include <stdio.h>

int main(void) {
    long int t; scanf("%d",&t);
    while(t--)
    {
        long int n,i,max=0; scanf("%ld",&n);
        char s[100010]={'\0'};
        scanf("%s",s);
        long int c[3];
        for(i=0;i<3;i++) c[i]=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R') 
            {
                c[0]++;
                if(max<c[0]) max=c[0];
            }
            else if(s[i]=='G')
            {
                c[1]++;
                if(max<c[1]) max=c[1];
            }
            else if(s[i]=='B') 
            {
                c[2]++;
                if(max<c[2]) max=c[2];
            }
        }
        printf("%ld\n",n-max);
    }
	// your code goes here
	return 0;
}