/*Chef likes strings a lot but he likes palindromic strings more. 
Today, Chef has two strings A and B, each consisting of lower case alphabets.
Chef is eager to know whether it is possible to choose some non empty strings s1 and s2 where s1 is a substring of A, 
s2 is a substring of B such that s1 + s2 is a palindromic string. Here '+' denotes the concatenation between the strings
*/

#include <stdio.h>
#include <string.h>
int main(void) 
{
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
