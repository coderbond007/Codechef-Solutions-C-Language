#include<stdio.h>

int main(){
	int i,t;  scanf("%d",&t);
	while(t--)
	{
	    char s[100]; scanf("%s",s);
	    int c[26]={0},max=0;
	    if(strlen(s)%2==1) printf("NO\n");
	    else
	    {
	        for(i=0;i<strlen(s);i++) 
	        {
	            if(s[i]>='a' && s[i]<='z') c[s[i]-'a']++;
	            else if(s[i]>='A' && s[i]<='Z') c[s[i]-'A']++;
	        }
	        for(i=0;i<26;i++)
	        {
	            if(max<c[i]) max=c[i];
	        }
	        if(max==strlen(s)/2) printf("YES\n");
	        else printf("NO\n");
	    }
	}
	return 0;
}