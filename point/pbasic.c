#include<stdio.h>
int main()
{
	int i,*p;
	p = &i;
	// int i,*p=&i;
	i = 10;
	printf("%d \n",*p);
	
}
