#include<stdio.h>
#include<math.h>
int main()
{
	long long n,k,i,j,count;
	int length=0;
	scanf("%lld%lld",&n,&k);
	long long *arr = (long long)malloc(k*k*sizeof(long long));
	for(i=0;i<k;i++)
	{
		scanf("%lld",(arr+i));
	}
	for(i=0;i<k;i++)
	{
		if((*(arr+i)%n) ==0)
		{
			if(length==0)
			{	length = length + 1;
				printf("Minimum interval length: %d \nFound intervals:\n",length);
			}
			printf("[%lld, %lld]\n",i+1,i+1);
		}
	}
	if(length==0)
	{
	for(i=1;i<k;i++)
	{
		length = 0;
		for(j=0;j<k-i;j++)
		{
			*(arr+ i*k +j) = *(arr+((i-1)*k)+j) * *(arr+((i-1)+(j+1)));
			if((*(arr+i*k+j)%n)==0)
			{
				if(length==0)
				{
					length  = i+1;
				printf("Minimum interval length: %d\nFound intervals:\n",length);
				}
				printf("[%lld, %lld]\n",j+1,j+i+1);
			
			}
				
			
		}
		if(length >0)
			break;
	}
	if(length==0)
		printf("NONE\n");
	}
	return 0;
}
