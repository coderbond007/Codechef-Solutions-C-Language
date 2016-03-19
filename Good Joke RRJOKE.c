/* Vadim and Roman like discussing challenging problems with each other. One day Vadim told his friend following problem:
Given N points on a plane. Each point p is defined by it's two integer coordinates — px and py. 
The distance between points a and b is min(|ax - bx|, |ay - by|). 
You should choose a starting point and make a route visiting every point exactly once, 
i.e. if we write down numbers of points in order you visit them we should obtain a permutation. 
Of course, overall distance walked should be as small as possible. The number of points may be up to 40.
"40? Maybe 20? Are you kidding?" – asked Roman. "No, it's not a joke" – replied Vadim. 
So Roman had nothing to do, but try to solve this problem. 
Since Roman is really weak in problem solving and you are the only friend, except Vadim, 
with whom Roman can discuss challenging tasks, he has nobody else to ask for help, but you!
*/
#include<stdio.h>
main()
{
	int t,n; scanf("%d",&t);
	while(t--)
	{
    	int ans=0,i;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
        	int x,y; scanf("%d%d",&x,&y);
        	ans^=i;
    	}
    	printf("%d\n",ans);
	}
return;
}  