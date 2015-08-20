#include<stdio.h>
#include<stdlib.h>
 
int minCoins( int a[], int N, int S ){
/* N: Length of the array */
 
int *min = (int *)malloc(sizeof(int)*(S+1));
int i,j;
for(i=0;i<=S;i++)
    min[i]= INT_MAX; // start with extremly large value
 
min[0]=0;
for(i=1;i<=S;i++)
{
    for(j=0;j<N;j++)
    {
        if(i>=a[j])
        {
            if(min[i-a[j]]+1<min[i])
            min[i] = min[i-a[j]]+1;
        }
    }
}
 
if(min[S]== INT_MAX)
    return -1;
 
return min[S];
}
 
// main function to check above functionality
int main()
{
    int a[]={1,3,5};
    int size = sizeof(a)/sizeof(a[0]);
    int d = minCoins(a,size,11);
    printf("%d",d);
    return 0;
}
