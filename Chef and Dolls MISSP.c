/*Chef is fan of pairs and he likes all things that come in pairs. 
He even has a doll collection in which all dolls have paired.
One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!
Help chef find which type of doll is missing..
*/
#include <stdio.h>
 
int main(void) 
{
	int t,n,a,res;
	scanf("%d",&t);
    while(t--)
    {
        res=0;
        scanf("%d",&n);
        while(n--)
        { 
            scanf("%d",&a);
	        res^=a;
	    }
	    printf("%d\n",res);
	}
	return 0;
}