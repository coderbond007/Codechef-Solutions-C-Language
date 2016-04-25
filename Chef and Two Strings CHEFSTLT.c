#include <stdio.h>

int main(void) {
    int t; scanf("%d",&t);
    while(t--)
    {
        //int n,i,k; scanf("%d%d",&n,&k);
        char s1[200],s2[200];
        scanf("%s",s1);
        scanf("%s",s2);
        int c1=0,c2=0,i;
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]==s2[i] && s1[i]!='?' && s2[i]!='?') c2++;
            if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?') c1++;
        }
        printf("%d %d\n",c1,strlen(s1)-c2);
    }
	// your code goes here
	return 0;
}