#include<stdio.h>
int main()
{
	int n=10;
	int a[n];
	for (int i=0;i<n;i++)
	{
	a[i]=i;
	printf("%d \n",a[i]);
	printf("%p \n",&a[i]);
	}
}
