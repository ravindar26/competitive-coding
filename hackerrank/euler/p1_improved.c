#include<stdio.h>

int main()
{
	long long t,n,i,a,b,c;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		a = (n-1)/3;
		b = (n-1)/5;
		c = (n-1)/15;
		printf("%lld\n",(3*a*(a+1)/2) + (5*b*(b+1)/2) - (15*c*(c+1)/2));
		
	}
	return 0;
}
