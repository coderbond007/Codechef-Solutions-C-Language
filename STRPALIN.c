#include <stdio.h>
#include <string.h>
    int main(void) {
        int t; scanf("%d",&t);
        while(t--)
        {
            char a[1000]={'\0'},b[1000]={'\0'};
            scanf("%s",a);
            scanf("%s",b);
            int c1[26]={0},c2[26]={0},i,j,flag=0;
            for(i=0;i<1000;i++) c1[a[i]-'a']++;
            for(i=0;i<1000;i++) c2[b[i]-'a']++;
            for(i=0;i<26;i++)
            {
                if(c1[i]>0 && c2[i]>0) {flag=1; break;}
                else flag=0;
            }
            if(flag==1) printf("Yes\n");
            else printf("No\n");
        }
    	// your code goes here
    	return 0;
    }
