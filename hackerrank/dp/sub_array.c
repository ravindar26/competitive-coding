#include<stdio.h>

void maxSubArraySum(int a[],long int size)
{
   int max_so_far = 0, max_ending_here = 0,count=0,ncount=0,min=0,temp=a[0];
   long int i;
   for(i = 0; i < size; i++)
   {
	if(a[i]>=0)
		count = count + a[i];
	else
	{
		ncount = ncount + 1;
		if(temp < a[i])
			temp = a[i];
	}

     max_ending_here = max_ending_here + a[i];
     if(max_ending_here < 0)
        max_ending_here = 0;
     if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }

	if(ncount==size)
		printf("%d %d",temp,temp);
	else
		printf("%d %d",max_so_far,count);
} 

int main()
{
	int t,i,j;
	int *ar;
	long int n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		ar = (int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",(ar+j));
		}
		maxSubArraySum(ar,n);
		printf("\n");
	}
		
	return 0;
}
