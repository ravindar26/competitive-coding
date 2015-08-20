#include<stdio.h>

int main()
{
	long n,m,i,j,l,r,max,count=0;
	scanf("%ld%ld",&n,&m);
        long *arr = (long *)malloc(n*sizeof(long));
	for(i=0;i<n;i++)
		scanf("%ld",(arr+i));

	for(j=0;j<m;j++)
	{
		scanf("%ld%ld",&l,&r);
		max = *(arr+(l-1));		
		for(i=l;i<r;i++)
		{
			if((*(arr+i))>max)
				max = *(arr+i);
		}
		
		for(i=l-1;i<r;i++)
		{
			if(*(arr+i)==max)
			{
				count = count+1;
		}
		}
		
		printf("%ld\n",count);
		count = 0;
	}
	return 0;
}

