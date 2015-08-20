#include<stdio.h>

int main()
{
	char s[10];
	int temp;
	scanf("%s",s);
	if(s[8]-'P' ==0 && s[0]=='1' && s[1]=='2')
		s[8]='\0';
	else
	{
		if(s[8]-'A'==0 && s[0]=='1' && s[1]=='2')
		{
			s[0]='0';s[1]='0';s[8]='\0';
		}
		else
		{
			if(s[8]-'A'==0)
				s[8]='\0';
			else
			{
				temp = (s[0]-'0')*10 + (s[1]-'0');
				temp = temp  + 12;
				s[0] = (temp/10)+'0';
				s[1] = (temp%10)+'0';
				s[8] = '\0';
			}

		}
	}
	printf("%s",s);
	return 0;
}
