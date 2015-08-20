#include<iostream>

using namespace std;

int main()
{
	int m,x,y,t,i,j,k,l,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int house[100]={0};
		cin>>m>>x>>y;
		int a[m];
		for(j=0;j<m;j++)
		{
			cin>>a[j];
		}
		for(k=0;k<m;k++)
		{
			if(a[k]-(x*y)<0)
			{
				l=0;
			}
			else
			{
				l = (a[k]-(x*y));
			}
			for(;l<(a[k]+(x*y));l++)
			{
				if(house[l]==0)
					house[l]=1;

			}
		
		}
		int count=0;
		for(c=0;c<100;c++)
			if(a[c]!=0)
				count = count +1;

		cout<<count<<"\n";

	}
}
