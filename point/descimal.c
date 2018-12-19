#include<stdio.h>
void main()
{
	int i,*p;
	printf("load the number");
	scanf("%d",&i);
	p = &i;
	printf("%d",p);
}
