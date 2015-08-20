#include<stdio.h>


int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",(n-1)*n*(n+1)*((3*n)+2)/12);
	}

	return 0;
}
