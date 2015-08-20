#include<stdio.h>

int main()
{
	int t,i;
	long long n,temp,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		temp = n;
		count = 0;
		while(n>0)
		{
			if((n%10)!=0)
			{
				if(temp%(n%10) == 0)
					count = count+1;
			}
			n = n/10;
		}
		printf("%lld\n",count);
	}
	return 0;
}
