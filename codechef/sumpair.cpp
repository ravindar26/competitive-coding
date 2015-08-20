#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	long int t,n,d,i,k,l,j,count=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		
		cin>>n>>d;
		int a[n],b[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			b[j]=0;

		}
		

		for(k=0;k<n;k++)
		{
			
			for(l=k+1;l<n;l++)
			{
				
				if(abs(a[k]-a[l])<d)
				{
					if(b[k]==0)
						count = count + a[k];
						b[k]=1;
					if(b[l]==0)
						count = count + a[l];
						b[l]=1;
						cout<<a[k]<<"\t"<<a[l]<<"\t"<<b[k]<<"\t"<<b[l]<<"\n";

				}	
			}
		}

		cout<<count<<"\n";
		count = 0;


	}
	return 0;
}