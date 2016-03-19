/*A number is called palindromic if its decimal representation is a palindrome. 
You are given a range, described by a pair of integers L and R. 
Find the sum of all palindromic numbers lying in the range [L, R], inclusive of both the extrema.
*/

#include<stdio.h>
main()
{
	int t;scanf("%d",&t);
	while(t--)
	{
    	int a,b; scanf("%d %d",&a,&b);
    	int i; long int s=0;
    	for(i=a;i<=b;i++)
    	{
        	int reverse=0, rem,temp=i;
        	while(temp!=0)
            {
                rem=temp%10;
                reverse=reverse*10+rem;
                temp/=10;
            }
            if(reverse==i) s+=i;
        }
    	printf("%ld\n",s);
    }
    return 0;
}