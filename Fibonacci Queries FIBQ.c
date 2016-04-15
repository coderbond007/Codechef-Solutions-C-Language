#include<stdio.h>
#include<stdlib.h>
#define MOD 1000000007
long long *a;
struct matrix
    {
	long long aux[2][2];
    }T[400020], result;

void matrix_power(long long n,long long ar[2][2])
{
	long long p,q,r,s;
	if(n==0||n==1)
	return;
	long long Mat[2][2]={{1,1},{1,0}};
	matrix_power(n/2,ar);
	p=((ar[0][0]*ar[0][0])%MOD+(ar[0][1]*ar[1][0])%MOD)%MOD;
    q=((ar[0][0]*ar[0][1])%MOD+(ar[0][1]*ar[1][1])%MOD)%MOD;
    r=((ar[1][0]*ar[0][0])%MOD+(ar[1][1]*ar[1][0])%MOD)%MOD;
    s=((ar[1][0]*ar[0][1])%MOD+(ar[1][1]*ar[1][1])%MOD)%MOD;
    ar[0][0]=p;
	ar[0][1]=q;
    ar[1][0]=r;
	ar[1][1]=s;
	if(n%2==1)
	{
	p=((ar[0][0]*Mat[0][0])%MOD+(ar[0][1]*Mat[1][0])%MOD)%MOD;
    q=((ar[0][0]*Mat[0][1])%MOD+(ar[0][1]*Mat[1][1])%MOD)%MOD;
    r=((ar[1][0]*Mat[0][0])%MOD+(ar[1][1]*Mat[1][0])%MOD)%MOD;
    s=((ar[1][0]*Mat[0][1])%MOD+(ar[1][1]*Mat[1][1])%MOD)%MOD;
    ar[0][0]=p;
	ar[0][1]=q;
    ar[1][0]=r;
	ar[1][1]=s;
    }
}

void matrix_multiply(long long a[2][2],long long b[2][2],long long ar[2][2]){
	ar[0][0]= ((a[0][0]*b[0][0])%MOD+(a[0][1]*b[1][0])%MOD)%MOD;
    ar[0][1]= ((a[0][0]*b[0][1])%MOD+(a[0][1]*b[1][1])%MOD)%MOD;
    ar[1][0]= ((a[1][0]*b[0][0])%MOD+(a[1][1]*b[1][0])%MOD)%MOD;
    ar[1][1]= ((a[1][0]*b[0][1])%MOD+(a[1][1]*b[1][1])%MOD)%MOD;
}

void build_Seg(long long start,long long end,long long node){
	if(start==end)
	{
	long long ar[2][2];
//	ar=(long long **)malloc(sizeof(long long *)*2);
//	ar[0]=(long long *)malloc(sizeof(long long));
//	ar[1]=(long long *)malloc(sizeof(long long));
	ar[0][0]=1;
	ar[0][1]=1;
	ar[1][0]=1;
	ar[1][1]=0;
	matrix_power(a[start],ar);
	T[node].aux[0][1]=ar[0][1];
	T[node].aux[1][0]=ar[1][0];
	T[node].aux[0][0]=(ar[0][0]+1)%MOD;
	T[node].aux[1][1]=(ar[1][1]+1)%MOD;
	//free(ar);
	}
	else
	{
		long long mid=(start+end)/2;
		build_Seg(start,mid,2*node+1);
		build_Seg(mid+1,end,2*node+2);
		matrix_multiply( T[2*node+1].aux, T[2*node+2].aux,T[node].aux);
	}	
}
void update(long  long start,long long end,long long index ,long long node ){
	if(start==end){
	long long  ar[2][2];
//	ar=(long long **)malloc(sizeof(long long *)*2);
//	ar[0]=(long long *)malloc(sizeof(long long));
//	ar[1]=(long long *)malloc(sizeof(long long));
	ar[0][0]=1;
	ar[0][1]=1;
	ar[1][0]=1;
	ar[1][1]=0;
	matrix_power(a[start],ar);
	T[node].aux[0][1]=ar[0][1];
	T[node].aux[1][0]=ar[1][0];
	T[node].aux[0][0]=(ar[0][0]+1)%MOD;
	T[node].aux[1][1]=(ar[1][1]+1)%MOD;
	//free(ar);
	}
	else{
	long long mid=(end+start)/2;
	if(index >=start && index<=mid)
	update(start,mid,index,2*node+1);
	else
	update(mid+1,end,index,2*node+2);
	matrix_multiply( T[2*node+1].aux, T[2*node+2].aux,T[node].aux);
	}
}
struct matrix query(long long start,long long end,long long l,long long r,long long node){
	if(l<=start && r>=end)
	return T[node];
	if(r<start || l>end){
	struct matrix tmp;
	tmp.aux[0][0]=1;
    tmp.aux[1][1]=1;
	tmp.aux[0][1]=0;
	tmp.aux[1][0]=0;	
	return tmp;	
	}
	else{
	long long mid=(end+start)/2;
	struct matrix q1=query(start,mid,l,r,2*node+1);
	struct matrix q2=query(mid+1,end,l,r,2*node+2);
    matrix_multiply(q1.aux,q2.aux,result.aux);
	return result;
	}
}
int main(){
	char ch;
	long long i,j,l,r,n,m;
	scanf("%lld%lld",&n,&m);
	a=(long long *)malloc(sizeof(long long)*(n+1));
	for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
	}
	build_Seg(0,n-1,0);
    for(i=0;i<m;i++){
		getchar();
		scanf("%c%lld%lld",&ch,&l,&r);
		if(ch=='C'){
			a[l-1]=r;
			update(0,n-1,l-1,0);
		}

	    if(ch=='Q'){
		    struct matrix result=query(0,n-1,l-1,r-1,0);
		    printf("%lld\n",result.aux[0][1]);	
		}
}
return 0;
}