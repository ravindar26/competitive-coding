#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
	int count = 0,i;
	int alpha[26] = { };
	char c;

	while((c=getchar())!='\n')
	{
		if(isupper(c))
			c = tolower(c);

		if(alpha[c-'a']==0)
		{
			alpha[c-'a'] =1;
			count = count + 1;
		}

	}

	if(count==26)
		cout<<"pangram"<<"\n";
	else
		cout<<"not pangram"<<"\n";

	return 0;
}
