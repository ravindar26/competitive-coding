#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	int t,i,count,n;
	string s;
	cin>>t;
	while(t--)
	{
		count = 0;
		
		cin>>s;
		n = s.length();
		for(i=0;i<n-1;i++)
		{
			if(abs(s[i]-s[i+1]) ==(abs(s[n-1-i] - s[n-2-i])) )
				count = count + 1;
			else
				break;
		}
		if(count==(s.length()-1))
			cout<<"Funny\n";
		else
			cout<<"Not Funny\n";
		
	}
	return 0;
}
