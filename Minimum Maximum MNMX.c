/*Chef loves to play with arrays by himself. Today, he has an array A consisting of N distinct integers. 
He wants to perform the following operation on his array A.

    Select a pair of adjacent integers and remove the larger one of these two. 
	This decreases the array size by 1. Cost of this operation will be equal to the smaller of them.

Find out minimum sum of costs of operations needed to convert the array into a single element
*/

#include <stdio.h>
#include <string.h>
 
int main(void) {
    int t; scanf("%d",&t);
    while(t--)
    {
        unsigned int n,i;scanf("%u",&n);
        unsigned int a[n],min=100001;
        for(i=0;i<n;i++)
        {
            scanf("%u",&a[i]);
            if(min>a[i]) min=a[i];
        }
        printf("%u\n",min*(n-1));
    }
	// your code goes here
	return 0;
}