#include <stdio.h>

void coinchange(int coin[], int num, int sum)
{
	int i, j;
	int *C;
	int min;
	
	C = (int*)malloc((sum+1)*sizeof(int));
	C[0] = 0;
	
	for (i=1; i <= sum; i++)
	{
		min = 999;
		for (j = 0; j<num; j++)
		{
			if (coin[j] <= i)
			{
				if (min > C[i-coin[j]]+1)
				{
					min = C[i-coin[j]]+1;
				}
			}
		}
		C[i] = min;
	}
	
	printf("minimum coins required %d", C[sum]);
}

int main()
{
	int coin[] = {1,2,5};
	coinchange(coin, 3 ,9);
}
