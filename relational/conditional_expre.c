#include<stdio.h>
int main()
{
	int i=1,j=2,k;
	k=i>j?i:j;
	printf("%d \n",k);
	k = (i>=0?i:0)+j;
	printf("%d \n",k);
}
