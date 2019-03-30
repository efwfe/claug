#include<stdio.h>
int main()
{
	int a;
	a = 10;
	int *p = &a;
	printf("%p\n",p);
	printf("%d\n",a);
}

