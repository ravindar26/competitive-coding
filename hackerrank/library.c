#include<stdio.h>

int main()
{
	int d,m,y;
	int ed,em,ey;
	scanf("%d%d%d%d%d%d",&d,&m,&y,&ed,&em,&ey);
	if((y-ey)!=0)
		printf("10000");
	else
	{
		if(abs(m-em)!=0)
			printf("%d",(abs(m-em)*500)+(abs(d-ed)*15));
		else
		{
			printf("%d",abs(d-ed)*15);
		}
	}
	return 0;
}

