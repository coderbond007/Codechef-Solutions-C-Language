#include<stdio.h>
#include<string.h>
 
main()
{
	int t,q;
	scanf("%d",&t);
	for(q=0;q<t;q++)
	{
		int i,n,j,t,a[100000];
		scanf("%d",&n);
     	for(i=0;i<n;i++)
	     	{
	         scanf("%d",&a[i]);
	     	}
 
	    for(i=1;i<=2;i++)
	     {
	        for(j=1;j<n;j++)
	        {
	            if(a[j]>=a[j-1])
			    {
	                t=a[j];
		            a[j]=a[j-1];
	                a[j-1]=t;
	           } 
	        }

		}
printf("%d\n",a[n-1]+a[n-2]);
}
}