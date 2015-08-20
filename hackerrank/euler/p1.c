#include<stdio.h>

long long sum(long long n)
{
	long long count =0,i;
	for(i=1;i<n;i++)
	{
		if((i%3 ==0) || (i%5 ==0))
		{
			count = count + i;
		}
	}
	return count;

}

int main()
{
	long long t,n,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",sum(n));
	}
	return 0;
}
