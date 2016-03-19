/*Santosh has a farm at Byteland. He has a very big family to look after. 
His life takes a sudden turn and he runs into a financial crisis. After giving all the money he has in his hand, 
he decides to sell some parts of his plots. The specialty of his plot is that it is rectangular in nature. 
Santosh comes to know that he will get more money if he sells square shaped plots. So keeping this in mind, 
he decides to divide his plot into minimum possible square plots so that he can get maximum profit out of this.
So your task is to find the minimum number of square plots that can be formed out of the rectangular plot.
*/
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
main()
{
    int t,a,b,c; scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=gcd(a,b);
        printf("%d\n",(a*b)/(c*c));
    }
    return 0;
}  