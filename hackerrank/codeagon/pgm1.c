#include<stdio.h>

void main()
{
	int n,m,i,count=0,sum=0;
	scanf("%d%d",&n,&m);
	if(m==n)
		printf("%d",1);

	for(i=n;i>0;i--)
	{
		if((sum+i)<=m)
		{
			if((sum+i)==m)
			{
				sum = sum +i;
				count = count +1;
				break;
			}
			sum = sum + i;
			count = count + 1;
		}
	
	}
	if(sum == m)
		printf("%d",count);
	else
		printf("-1");
}
	

