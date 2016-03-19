#include <stdio.h>

int main(void) {
    int t; scanf("%d",&t);
    while(t--)
    {
        char s[100]; scanf("%s",s);
        int i,c1=0,c2=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='a') c1++;
            else if(s[i]=='b') c2++;
        }
        if(c1>=c2) printf("%d\n",c2);
        else printf("%d\n",c1);
    }
	// your code goes here
	return 0;
}
