#include<stdio.h>
   
int arr[1000000]={0};

     
void main()
{
	int a, i,n;
    scanf("%d",&n);
    while(n--)
    {
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000000)
    {
        while(arr[a])
        {
            printf("%d\n",a);
            arr[a]--;
        }
    a++;
    }
}