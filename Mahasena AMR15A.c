/*Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him 
(as army-chief), and the reason for that was their really powerful army, also called as Mahasena.
Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of 
weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than
 the count of "unlucky" soldiers, and "NOT READY" otherwise.
Given the number of weapons each soldier is holding, 
your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY".
Note: You can find the definition of an even number here.*/

#include <stdio.h>
     
int main(void) {
    int n,i,c1=0,c2=0; scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0) c1++;
        else c2++;
    }
    if(c1>c2) printf("READY FOR BATTLE\n");
    else printf("NOT READY\n");
	// your code goes here
	return 0;
} 
