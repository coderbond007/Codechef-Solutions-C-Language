/*Chef is on a vacation these days, so his friend Chefza is trying to solve Chef's everyday tasks.
Today's task is to make a sweet roll. Rolls are made by a newly invented cooking machine. 
The machine is pretty universal - it can make lots of dishes and Chefza is thrilled about this.
To make a roll, Chefza has to set all the settings to specified integer values. 
There are lots of settings, each of them set to some initial value. 
The machine is pretty complex and there is a lot of cooking to be done today, so Chefza has decided to use only two quick 
ways to change the settings. In a unit of time, he can pick one setting (let's say its current value is v) and 
change it in one of the following ways.

    If v is even, change this setting to v/2. If v is odd, change it to (v − 1)/2.
    Change setting to 2 × v

The receipt is given as a list of integer values the settings should be set to. 
It is guaranteed that each destination setting can be represented as an integer power of 2.
Since Chefza has just changed his profession, he has a lot of other things to do. 
Please help him find the minimum number of operations needed to set up a particular setting of the machine. 
You can prove that it can be done in finite time.
*/
#include<stdio.h>
#include<math.h>
     
int main()
{
    int t;
	long long int A, B, count = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld %lld", &A, &B);
		while (B%A != 0)
		{
			A = A / 2;
			count++;
		}
		while (A != B)
		{
			A = A * 2;
			count++;
		}
		printf("%lld\n", count);
		count = 0;
	}
	return 0;
}   