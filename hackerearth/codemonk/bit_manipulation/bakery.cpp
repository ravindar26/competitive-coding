#include<stdio.h>
#include<iostream>
#include <algorithm>

using namespace std;


int main()
{
	int t,n,k,i,j,m,count=0,sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&k);
		int b[n];
		long a;
		for(j=0;j<n;j++)
		{
			cin>>a;
			while(a)
			{
				a = a&(a-1);
				count = count + 1;
			}
			b[j] = count;
			count = 0;
			
		}
		sort(b,b+n);
		for(m=0;m<k;m++)
		{
			sum = sum + b[n-1-m];
		}
		cout<<sum<<"\n";
		sum = 0;
	}

	return 0;
}
