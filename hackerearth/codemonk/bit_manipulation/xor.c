#include<stdio.h>

int main()
{
	int t,i;
	long long int m,p,n;
	scanf("%d",&t);
	int count;
	for(i=0;i<t;i++)
	{
		count =0;
		scanf("%lld%lld",&p,&m);
		n = p^m;
		while(n)
		{
			n = n&(n-1);
			count = count + 1;
		}
		printf("%d\n",count);
		count = 0;
	}
	return 0;	
}

