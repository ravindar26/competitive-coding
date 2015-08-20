#include <stdio.h>

void insertionSort(int ar_size, int *  ar) {
    
    int i,temp,j,flag=0;
    temp = ar[ar_size-1];
    for(i=(ar_size-2);i>=0;i--){
        if(ar[i]>temp){
            ar[i+1] = ar[i];
	    for(j=0;j<ar_size;j++)
                printf("%d ",ar[j]);
	    printf("\n");

        }
	else
	{
		ar[i+1] = temp;
		flag =1;
		break;
	}
    }
	if(flag==0)
		ar[0] = temp;
     for(i=0;i<ar_size;i++)
                printf("%d ",ar[i]);



}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}

