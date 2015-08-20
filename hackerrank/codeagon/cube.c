#include<stdio.h>

int main()
{
	long long n,i,j,m,k,count=0;
	scanf("%lld",&n);
	int *arr = (int *)malloc(n*3*sizeof(int));
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			scanf("%d",(arr+ i*3 + j));

	scanf("%lld",&m);
	int *arr1 = (int *)malloc(m*6*sizeof(int));
	 for(i=0;i<m;i++)
	 {
                for(j=0;j<6;j++)
                        scanf("%d",(arr1+ i*6 + j));
	
		for(k=0;k<n;k++)
		{
			if((*(arr1+ i*6 +0)<=(*(arr+ k*3 +0)-3)) && (*(arr1+ i*6 +1)<=(*(arr+ k*3 +1)-3)) && 
						(*(arr1+ i*6 +2)<=(*(arr+ k*3 +2)-3))
				&& (*(arr1+i*6 + 3)>=*(arr+k*3+0)) && (*(arr1+i*6 + 4)>=*(arr+k*3+1)) 
				&& (*(arr1+i*6 + 5)>=*(arr+k*3+2)))
			{
				count = count + 1;
			}
		}
		printf("%lld\n",count);
		count = 0;
	 }
	return 0;
}
