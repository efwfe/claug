#include<stdio.h>
#define NUM (sizeof(a)/sizeof(a[0]))
int main()
{
	int a[5] = {0},i;
	for (i=0;i<NUM;i++)
	{
		printf("%d",a[i]);
	}
}
