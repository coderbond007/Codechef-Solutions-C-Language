#include <stdio.h>

void quick_sort (long long int *data, long long int n) 
    {
        long long int i, j, p, t;
        if (n < 2)
            return;
        p = data[n / 2];
        for (i = 0, j = n - 1;; i++, j--) {
            while (data[i] < p)
                i++;
            while (p < data[j])
                j--;
            if (i >= j)
                break;
            t = data[i];
            data[i] = data[j];
            data[j] = t;
        }
        quick_sort(data, i);
        quick_sort(data + i, n - i);
        return;
    }
    int main(void) {
        long int t; scanf("%ld",&t);
        while(t--)
        {
            long long int c[3],k; 
            scanf("%lld%lld%lld",&c[0],&c[1],&c[2]);
            quick_sort(c,3);
            scanf("%lld",&k);
            //printf("%lld%lld%lld\n",c[0],c[1],c[2]);
            if(k<=c[0]) printf("%lld\n",(k-1)*3+1);
            else if(k>c[0]&&k<=c[1]) printf("%lld\n",c[0]*3+(k-1-c[0])*2+1);
            else if(k>c[1]&&k<=c[2]) printf("%lld\n",c[0]+k+c[1]);
        }
    	// your code goes here
    	return 0;
    }