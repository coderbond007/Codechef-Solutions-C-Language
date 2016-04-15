int main()
{	int x,i;
	scanf("%d",&x);
    if((x<100)&&(x!=42))
    {
		printf("%d \n",x);
		return main();
	}
    return 0;
}