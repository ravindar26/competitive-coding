#include<iostream>
using namespace std;

int main()
{
	int t,m,n,i,j,k;
	cin>>t;
	for(k=0;k<t;k++)
	{
	cin>>m>>n;
	int c[n];
	for(i=0;i<n;i++)
	{	cin>>c[i];	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((c[i]+c[j])==m)
			{
				cout<<i+1<<" "<<j+1;
			}
		}
	}
	cout<<"\n";
	}
	return 0;
}
