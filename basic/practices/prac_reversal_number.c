#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter two digit number");
	scanf("%d",&i);
	printf("%d \n",i);
	j = i%10;
	k=i/10;
	printf("%d, %d",j,k);
}
